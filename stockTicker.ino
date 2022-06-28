#include <ESP8266WiFi.h>
#include <ArduinoJson.h>
#include "library.h"
#include <Adafruit_NeoPixel.h>

const bool debug = 0;

const char* ssid = "*****";
const char* pass = "*****";
const char* host = "cloud.iexapis.com";
const char* timeHost = "worldtimeapi.org";

const byte stockCount = 15;
const byte len = 128;

String symbols[stockCount] = {"SPY", "QQQ", "IWM", "GLD", "SLV", "GDX", "GDXJ", "AAPL", "AMZN", "MSFT", "GOOG", "GME", "AMC", "ARKK", "MSTR"};
String symbolData[stockCount];

String pixelCue[len];

Adafruit_NeoPixel topRow(8*len, D7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel bottomRow(8*len, D8, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  topRow.begin();
  bottomRow.begin();
  setupWifi();
  for(int i = 0; i < len; i++){
    pixelCue[i] = "w0000000000000000";
  }
  for(int i = 0; i < stockCount; i++){
    symbolData[i] = "";
  }
  for(int i = 0; i < stockCount; i++){
    refresh(symbols[i]);
  }
  addtoCue("Eletto Stock Corp     ", 'b');
  addtoCue("Disarming Missiles...   ", 'r');
  addtoCue("Aligning Radio Blasters...     ", 'g');
  addtoCue("Ready        ", 'w');
}
long ct = 0;
int refreshOffset = 0;
void loop() {
  // put your main code here, to run repeatedly
    long t = millis();
    if(t-ct >= 600000){
      if(findTime()){
        for(int i = 0; i < stockCount; i++){
          refresh(symbols[i]);
        }
      }
      ct = t;
    }
  for(int i = 0; i < stockCount; i++){
    String price = checkData(symbols[i], "latestPrice");
    String pcnt = checkData(symbols[i], "changePercent");
    addtoCue(symbols[i] +" $" + String(price.toFloat()), 'w');
    if(pcnt.toFloat()*100 < 0){
      addtoCue(" " + String(pcnt.toFloat()*100) + "% ", 'r');
    }else if(pcnt.toFloat()*100 > 0){
      addtoCue(" +" + String(pcnt.toFloat()*100) + "% ", 'g');
    }else{
      addtoCue(" " + String(pcnt.toFloat()*100) + "% ", 'w');
    }
    delay(10);
  }
}
void setupWifi(){
  WiFi.begin(ssid, pass);
  Serial.print("Connecting");
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print('.');
  }Serial.println();
}

void refresh(String symbol){
  Serial.println("Refreshing: " + symbol);
  String url = "/stable/stock/"+ String(symbol) +"/quote?token=**********&filter=latestPrice,%20changePercent";
  WiFiClientSecure client;
  client.setInsecure();
  if(client.connect(host, 443)){
    String response;
    client.println("GET " + url + " HTTP/1.1");
    client.println("Host: " + String(host));
    client.println("Connection: close");
    client.println();
    Serial.println("Request Sent");
    while(client.connected()){
      if(client.available()){
        char c = client.read();
        response += String(c);
      }
    }
    String f = response.substring(response.indexOf('{'),response.lastIndexOf('}')+1);
    Serial.println(response);
    Serial.println(f);
    int pos;
    for(int i = 0; i < stockCount; i++){
      if(String(symbol) == String(symbols[i])){
        symbolData[i] = f;
        delay(500);
      }
      Serial.println(i);
    }
  }else{
    Serial.println("Failed to Connect to Server");
  }
}

String checkData(String symbol, String req){
  int pos;
  int count = sizeof(symbols)/sizeof(symbols[0]);
  for(int i = 0; i< count; i++){
    if(symbols[i] == symbol){
      pos = i;
    }
  }
  String input = symbolData[pos];
  DynamicJsonDocument doc(512);
  deserializeJson(doc, input);
  JsonObject obj = doc.as<JsonObject>();
  String data = String(obj[req]);
  return data;
}

void addtoCue(String text, char c){
  text.toLowerCase();
  if(debug == 1){Serial.println("Adding '"+ text + "' in " + String(c));}
  for(int i = 0; i < text.length(); i++){
    letter(text[i]);
    int sizeofCode = sizeof(letterCode)/sizeof(letterCode[0]);
    for(int j = 0; j <= sizeofCode; j++){
      if(debug == 1){Serial.println("Adding Row " + String(i) + ": " + letterCode[j]);}
      shiftCue();
      pixelCue[0] = String(c) + letterCode[sizeofCode-j];
    }
    shiftCue();
    pixelCue[0] = "w0000000000000000";
    showPixels();
  }
}
void shiftCue(){
  for(int i = len-2; i >= 0; i--){
    pixelCue[i+1] = pixelCue[i];
  }
  //if(debug == 1){for(int i = 0; i < len; i++){Serial.println(pixelCue[i]);}}
}
void showPixels(){
  int column = 0;
  int g, b = 0;
  for(int i = 0; i < len; i++){
    int r = pixelCue[i][0] == 'r' ? 64 : pixelCue[i][0] == 'w' ? 32 : 0;
    int g = pixelCue[i][0] == 'g' ? 64 : pixelCue[i][0] == 'w' ? 32 : 0;
    int b = pixelCue[i][0] == 'b' ? 64 : pixelCue[i][0] == 'w' ? 32: 0;
    if(debug == 1){Serial.println("Displaying: " + pixelCue[i]);}
    for(int j = 0; j < 8; j++){
      topRow.setPixelColor(column % 2 == 0 ? (column*8)+(7-j) : (column*8) + j, pixelCue[i][j+1] == '1' ? topRow.Color(r, g, b) : topRow.Color(0,0,0));
      bottomRow.setPixelColor(column % 2 == 0 ? (column*8)+(7-j) : (column*8) + j, pixelCue[i][j+9] == '1' ? topRow.Color(r, g, b) : topRow.Color(0,0,0));
    }
    column += 1;
  }
  topRow.show();
  bottomRow.show();
  delay(400);
}

bool findTime(){
  bool returnVal;
  String url = "/api/timezone/america/new_york";
  WiFiClientSecure client;
  client.setInsecure();
  if(client.connect(timeHost, 443)){
    String response;
    client.println("GET " + url + " HTTP/1.1");
    client.println("Host: " + String(host));
    client.println("Connection: close");
    client.println();
    while(client.connected()){
      if(client.available()){
        char c = client.read();
        response += String(c);
      }
    }
    response = response.substring(response.indexOf("{"), response.lastIndexOf("}")+1);
    if(response.substring(73, 75).toInt() > 9 && response.substring(73, 75).toInt() < 17){
      Serial.println("Market Open");
      returnVal = true;
    }else{
      Serial.println("Market Closed");
      returnVal = false;
    }Serial.println(response.substring(110,111));
    if(response.substring(110, 111) == "0" || response.substring(110, 111) == "6"){
      returnVal = false;
    }
  }
  return returnVal;
}
