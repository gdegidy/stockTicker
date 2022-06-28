# stockTicker
ESP8266 project to display stock information onto a grid of 2048 neopixels

I'm using a total of 8 8*32 neopixel panels arranged in a 4x2 grid and wired in a way where the top and bottom rows each act as a continuous strand of neopixles. The neopixels come arranged in a way that is hard to deal with for this project so this problem is tackled in the display() function that we only look at if we absolutely have to.

This project uses iexapis to get the stock information as well as the world clock api to check if the market is open so that you don't waste api calls. The stocks refresh every five minutes which was what I found to be a maximum for the amount of symbols I'm using while still leaving some room for error. 
