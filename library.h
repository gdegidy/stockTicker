String letterCode[] =  {"1111111111111111",
                      "1111111111111111",
                      "1111111111111111",
                      "1111111111111111",
                      "1111111111111111",
                      "1111111111111111"};
void letter(char input){
  if(input == 'a'){
     letterCode[0] = "0011111111111111";
     letterCode[1] = "0011111111111111";
     letterCode[2] = "1111000110000000";
     letterCode[3] = "1111000110000000";
     letterCode[4] = "0011111111111111";
     letterCode[5] = "0011111111111111";
  }else if(input == 'b'){
    letterCode[0] = "0001110000111000";
    letterCode[1] = "0111111111111110";
    letterCode[2] = "0111000111000110";
    letterCode[3] = "1111000111000111";
    letterCode[4] = "1111111111111111";
    letterCode[5] = "1111111111111111";
  }else if(input == 'c'){
    letterCode[0] = "0111000000001110";
    letterCode[1] = "1110000000000111";
    letterCode[2] = "1110000000000111";
    letterCode[3] = "1110000000000111";
    letterCode[4] = "0111100000011110";
    letterCode[5] = "0001111111111100";
  }else if(input == 'd'){
    letterCode[0] = "0011111111111000";
    letterCode[1] = "1111100000011111";
    letterCode[2] = "1111000000001111";
    letterCode[3] = "1110000000000111";
    letterCode[4] = "1111111111111111";
    letterCode[5] = "1111111111111111";
  }else if(input == 'e'){
    letterCode[0] = "1110001110000111";
    letterCode[1] = "1110001110000111";
    letterCode[2] = "1110001110000111";
    letterCode[3] = "1110001110000111";
    letterCode[4] = "1111111111111111";
    letterCode[5] = "1111111111111111";
  }else if(input == 'f'){
    letterCode[0] = "1110001110000000";
    letterCode[1] = "1110001110000000";
    letterCode[2] = "1110001110000000";
    letterCode[3] = "1110001110000000";
    letterCode[4] = "1111111111111111";
    letterCode[5] = "1111111111111111";
  }else if(input == 'g'){
    letterCode[0] = "0011100001111100";
    letterCode[1] = "0111000001111111";
    letterCode[2] = "1110000001100111";
    letterCode[3] = "1110000000000111";
    letterCode[4] = "0111111111111110";
    letterCode[5] = "0011111111111100";
  }else if(input == 'h'){
    letterCode[0] = "1111111111111111";
    letterCode[1] = "1111111111111111";
    letterCode[2] = "0000001110000000";
    letterCode[3] = "0000001110000000";
    letterCode[4] = "1111111111111111";
    letterCode[5] = "1111111111111111";
  }else if(input == 'i'){
    letterCode[0] = "1110000000000111";
   letterCode[1] = "1110000000000111";
   letterCode[2] = "1111111111111111";
   letterCode[3] = "1111111111111111";
   letterCode[4] = "1110000000000111";
   letterCode[5] = "1110000000000111";
  }else if(input == 'j'){
    letterCode[0] = "1110000000000000";
   letterCode[1] = "1111111111111111";
   letterCode[2] = "1111111111111111";
   letterCode[3] = "1110000000000111";
   letterCode[4] = "1110000000011111";
   letterCode[5] = "1110000000011111";
  }else if(input == 'k'){
    letterCode[0] = "1111000000011111";
    letterCode[1] = "1111100001111111";
    letterCode[2] = "0000111111000000";
    letterCode[3] = "0000011110000000";
    letterCode[4] = "1111111111111111";
    letterCode[5] = "1111111111111111";
  }else if(input == 'l'){
    letterCode[0] = "0000000000000111";
    letterCode[1] = "0000000000000111";
    letterCode[2] = "0000000000000111";
    letterCode[3] = "0000000000000111";
    letterCode[4] = "1111111111111111";
    letterCode[5] = "1111111111111111";
  }else if(input == 'm'){
    letterCode[0] = "1111111111111111";
   letterCode[1] = "1111000000000000";
   letterCode[2] = "0001110000000000";
   letterCode[3] = "0001110000000000";
   letterCode[4] = "1111000000000000";
   letterCode[5] = "1111111111111111";
  }else if(input == 'n'){
    letterCode[0] = "1111111111111111";
   letterCode[1] = "0000000000011110";
   letterCode[2] = "0000000011111000";
   letterCode[3] = "0000011111000000";
   letterCode[4] = "0111111000000000";
   letterCode[5] = "1111111111111111";
  }else if(input == 'o'){
    letterCode[0] = "0000111111110000";
   letterCode[1] = "0111111111111110";
   letterCode[2] = "1111000000001111";
   letterCode[3] = "1111000000001111";
   letterCode[4] = "0111111111111110";
   letterCode[5] = "0000111111110000";
  }else if(input == 'p'){
    letterCode[0] = "0011110000000000";
   letterCode[1] = "0111011100000000";
   letterCode[2] = "1110001110000000";
   letterCode[3] = "1110001110000000";
   letterCode[4] = "1111111111111111";
   letterCode[5] = "1111111111111111";
  }else if(input == 'q'){
    letterCode[0] = "0000111111110111";
   letterCode[1] = "0111111111111110";
   letterCode[2] = "1100000000011011";
   letterCode[3] = "1100000000000011";
   letterCode[4] = "0111111111111110";
   letterCode[5] = "0000111111110000";
  }else if(input == 'r'){
    letterCode[0] = "0011110000000111";
   letterCode[1] = "0111011100111110";
   letterCode[2] = "1110001111110000";
   letterCode[3] = "1110001111100000";
   letterCode[4] = "1111111111111111";
   letterCode[5] = "1111111111111111";
  }else if(input == 's'){
    letterCode[0] = "0011000001111100";
   letterCode[1] = "0111000001111110";
   letterCode[2] = "1110000111100111";
   letterCode[3] = "1110011110000111";
   letterCode[4] = "0111111000011110";
   letterCode[5] = "0011110000011100";
  }else if(input == 't'){
    letterCode[0] = "1110000000000000";
   letterCode[1] = "1110000000000000";
   letterCode[2] = "1111111111111111";
   letterCode[3] = "1111111111111111";
   letterCode[4] = "1110000000000000";
   letterCode[5] = "1110000000000000";
  }else if(input == 'u'){
    letterCode[0] = "1111111111111100";
   letterCode[1] = "1111111111111111";
   letterCode[2] = "0000000000000111";
   letterCode[3] = "0000000000000111";
   letterCode[4] = "1111111111111111";
   letterCode[5] = "1111111111111100";
  }else if(input == 'v'){
    letterCode[0] = "1111111111000000";
   letterCode[1] = "1111111111111100";
   letterCode[2] = "0000000000000011";
   letterCode[3] = "0000000000000011";
   letterCode[4] = "1111111111111100";
   letterCode[5] = "1111111111000000";
  }else if(input == 'w'){
    letterCode[0] = "1111111111111100";
   letterCode[1] = "0000000000001111";
   letterCode[2] = "0000000000111100";
   letterCode[3] = "0000000000111100";
   letterCode[4] = "0000000000001111";
   letterCode[5] = "1111111111111000";
  }else if(input == 'x'){
    letterCode[0] = "1111100000011111";
    letterCode[1] = "0001111000111100";
    letterCode[2] = "0000001111000000";
    letterCode[3] = "0000001111000000";
    letterCode[4] = "0001111000111100";
    letterCode[5] = "1111100000011111";
  }else if(input == 'y'){
    letterCode[0] = "1111100000000000";
    letterCode[1] = "0001111000000000";
    letterCode[2] = "0000001111111111";
    letterCode[3] = "0000001111111111";
    letterCode[4] = "0001111000000000";
    letterCode[5] = "1111100000000000";
  }else if(input == 'z'){
   letterCode[0] = "1111100000000111";
   letterCode[1] = "1110111000000111";
   letterCode[2] = "1110111110000111";
   letterCode[3] = "1110000111110111";
   letterCode[4] = "1110000001111111";
   letterCode[5] = "1110000000000111";
  }else if(input == '0'){
   letterCode[0] = "0000111111110000";
   letterCode[1] = "0111111111111110";
   letterCode[2] = "1111000000001111";
   letterCode[3] = "1111000000001111";
   letterCode[4] = "0111111111111110";
   letterCode[5] = "0000111111110000";
  }else if(input == '1'){
   letterCode[0] = "0000000000000111";
   letterCode[1] = "0000000000000111";
   letterCode[2] = "1111111111111111";
   letterCode[3] = "1111111111111111";
   letterCode[4] = "0111000000000111";
   letterCode[5] = "0000000000000111";
  }else if(input == '2'){
   letterCode[0] = "0001111100000111";
   letterCode[1] = "0111100111000111";
   letterCode[2] = "1110000011100111";
   letterCode[3] = "1110000001110111";
   letterCode[4] = "0111000000111111";
   letterCode[5] = "0001110000011111";
  }else if(input == '3'){
   letterCode[0] = "0001111101111000";
   letterCode[1] = "0111100111001111";
   letterCode[2] = "1110000111000111";
   letterCode[3] = "1110000000000111";
   letterCode[4] = "0011100000011100";
   letterCode[5] = "0001110000111000";
  }else if(input == '4'){
   letterCode[0] = "1111111111111111";
   letterCode[1] = "1111111111111111";
   letterCode[2] = "0000011100000000";
   letterCode[3] = "0000011100000000";
   letterCode[4] = "1111111100000000";
   letterCode[5] = "1111111100000000";
  }else if(input == '5'){
   letterCode[0] = "1110000001111000";
   letterCode[1] = "1110000011111100";
   letterCode[2] = "1110000111001110";
   letterCode[3] = "1110001110000111";
   letterCode[4] = "1111111100000111";
   letterCode[5] = "1111111100000111";
  }else if(input == '6'){
   letterCode[0] = "1110000000111000";
   letterCode[1] = "1110000011101110";
   letterCode[2] = "0111000111000111";
   letterCode[3] = "0111000011100111";
   letterCode[4] = "0011111111111111";
   letterCode[5] = "0001111111111100";
  }else if(input == '7'){
   letterCode[0] = "1111110000000000";
   letterCode[1] = "1111111000000000";
   letterCode[2] = "1110011110000000";
   letterCode[3] = "1110001111000000";
   letterCode[4] = "1110000011111111";
   letterCode[5] = "1110000000111111";
  }else if(input == '8'){
   letterCode[0] = "0011111000111110";
   letterCode[1] = "0111011101110011";
   letterCode[2] = "1100001111100011";
   letterCode[3] = "1100001111100011";
   letterCode[4] = "0111011101110011";
   letterCode[5] = "0011111000111110";
  }else if(input == '9'){
   letterCode[0] = "0011111111111100";
   letterCode[1] = "0111011111111110";
   letterCode[2] = "1100001110000111";
   letterCode[3] = "1100000110000111";
   letterCode[4] = "0111001110000111";
   letterCode[5] = "0011111000001110";
  }else if(input == '$'){
   letterCode[0] = "0011000001111100";
   letterCode[1] = "0110000011001110";
   letterCode[2] = "1111111111111111";
   letterCode[3] = "1100011000000110";
   letterCode[4] = "0111111000001100";
   letterCode[5] = "0011110000011100";
  }else if(input == ' '){
   letterCode[0] = "0000000000000000";
   letterCode[1] = "0000000000000000";
   letterCode[2] = "0000000000000000";
   letterCode[3] = "0000000000000000";
   letterCode[4] = "0000000000000000";
   letterCode[5] = "0000000000000000";
  }else if(input == ':'){
   letterCode[0] = "0000000000000000";
   letterCode[1] = "0000000000000000";
   letterCode[2] = "0000000000000000";
   letterCode[3] = "0000000000000000";
   letterCode[4] = "0011100000111000";
   letterCode[5] = "0011100000111000";
  }else if(input == '.'){
   letterCode[0] = "0000000000000000";
   letterCode[1] = "0000000000000000";
   letterCode[2] = "0000000000000000";
   letterCode[3] = "0000000000000000";
   letterCode[4] = "0000000000000111";
   letterCode[5] = "0000000000000111";
  }else if(input == '.'){
   letterCode[0] = "0000000000000000";
   letterCode[1] = "0000000000000000";
   letterCode[2] = "0000000000000000";
   letterCode[3] = "0000000000000000";
   letterCode[4] = "0000000000000111";
   letterCode[5] = "0000000000000111";
  }else if(input == '%'){
   letterCode[0] = "0000000000011000";
   letterCode[1] = "1111111000011000";
   letterCode[2] = "0000111111000000";
   letterCode[3] = "0000000111111100";
   letterCode[4] = "0011000000001111";
   letterCode[5] = "0011000000000000";
  }else if(input == '+'){
   letterCode[0] = "0000000001100000";
   letterCode[1] = "0000000111100000";
   letterCode[2] = "0000011111100000";
   letterCode[3] = "0000011111100000";
   letterCode[4] = "0000000111100000";
   letterCode[5] = "0000000001100000";
  }else if(input == '-'){
   letterCode[0] = "0000011000000000";
   letterCode[1] = "0000011110000000";
   letterCode[2] = "0000011111100000";
   letterCode[3] = "0000011111100000";
   letterCode[4] = "0000011110000000";
   letterCode[5] = "0000011000000000";
  }
}
