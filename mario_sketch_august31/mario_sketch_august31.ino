#include <Esplora.h>

//used to store what we receive
int incomingData = 0;
 
//this function runs only once (after reset)
void setup(){
  //open the serial port and set data rate to 9600 bps
  Serial.begin(9600);
}
 
//this function runs continuosly (after setup)
void loop(){
   //look if we have data
  if (Serial.available() > 0) {
      //get the sent data
      incomingData = Serial.read();
      Serial.print("We received : ");
      Serial.println(incomingData);
      Serial.print("The LED is : ");
      //49 = ASCII code for '1'
      if (incomingData == 77){
        Esplora.writeRGB(255,0,0);
        Serial.println("RED");
      } 
      else if (incomingData == 76) {
        Esplora.tone(660,100);
delay(75);Esplora.tone(660,100);
delay(150);Esplora.tone(660,100);
delay(150);Esplora.tone(510,100);
delay(50);Esplora.tone(660,100);
delay(150);Esplora.tone(770,100);
delay(275);Esplora.tone(380,100);
delay(287);Esplora.tone(510,100);
delay(225);Esplora.tone(380,100);
delay(200);Esplora.tone(320,100);
delay(250);Esplora.tone(440,100);
delay(150);Esplora.tone(480,80);
delay(165);Esplora.tone(450,100);
delay(75);Esplora.tone(430,100);
delay(150);Esplora.tone(380,100);
delay(100);Esplora.tone(660,80);
delay(100);Esplora.tone(760,50);
delay(75);Esplora.tone(860,100);
delay(150);Esplora.tone(700,80);
delay(75);Esplora.tone(760,50);
delay(175);Esplora.tone(660,80);
delay(150);Esplora.tone(520,80);
delay(75);Esplora.tone(580,80);
delay(75);Esplora.tone(480,80);
delay(175);Esplora.tone(510,100);
delay(275);Esplora.tone(380,100);
delay(200);Esplora.tone(320,100);
delay(250);Esplora.tone(440,100);
delay(150);Esplora.tone(480,80);
delay(165);Esplora.tone(450,100);
delay(75);Esplora.tone(430,100);
delay(150);Esplora.tone(380,100);
delay(100);Esplora.tone(660,80);
delay(100);Esplora.tone(760,50);
delay(75);Esplora.tone(860,100);
delay(150);Esplora.tone(700,80);
delay(75);Esplora.tone(760,50);
delay(175);Esplora.tone(660,80);
delay(150);Esplora.tone(520,80);
delay(75);Esplora.tone(580,80);
delay(75);Esplora.tone(480,80);
delay(250);Esplora.tone(500,100);
delay(150);Esplora.tone(760,100);
delay(50);Esplora.tone(720,100);
delay(75);Esplora.tone(680,100);
delay(75);Esplora.tone(620,150);
delay(150);Esplora.tone(650,150);
delay(150);Esplora.tone(380,100);
delay(75);Esplora.tone(430,100);
delay(75);Esplora.tone(500,100);
delay(150);Esplora.tone(430,100);
delay(75);Esplora.tone(500,100);
delay(50);Esplora.tone(570,100);
delay(110);Esplora.tone(500,100);
delay(150);Esplora.tone(760,100);
delay(50);Esplora.tone(720,100);
delay(75);Esplora.tone(680,100);
delay(75);Esplora.tone(620,150);
delay(150);Esplora.tone(650,200);
delay(150);Esplora.tone(1020,80);
delay(150);Esplora.tone(1020,80);
delay(75);Esplora.tone(1020,80);
delay(150);Esplora.tone(380,100);
delay(150);Esplora.tone(500,100);
delay(150);Esplora.tone(760,100);
delay(50);Esplora.tone(720,100);
delay(75);Esplora.tone(680,100);
delay(75);Esplora.tone(620,150);
delay(150);Esplora.tone(650,150);
delay(150);Esplora.tone(380,100);
delay(75);Esplora.tone(430,100);
delay(75);Esplora.tone(500,100);
delay(150);Esplora.tone(430,100);
delay(75);Esplora.tone(500,100);
delay(50);Esplora.tone(570,100);
delay(110);Esplora.tone(500,100);
delay(150);Esplora.tone(760,100);
delay(50);Esplora.tone(720,100);
delay(75);Esplora.tone(680,100);
delay(75);Esplora.tone(620,150);
delay(150);Esplora.tone(650,200);
delay(150);Esplora.tone(1020,80);
delay(150);Esplora.tone(1020,80);
delay(75);Esplora.tone(1020,80);
delay(150);Esplora.tone(380,100);
delay(150);Esplora.tone(500,100);
delay(150);Esplora.tone(760,100);
delay(50);Esplora.tone(720,100);
delay(75);Esplora.tone(680,100);
delay(75);Esplora.tone(620,150);
delay(150);Esplora.tone(650,150);
delay(150);Esplora.tone(380,100);
delay(75);Esplora.tone(430,100);
delay(75);Esplora.tone(500,100);
delay(150);Esplora.tone(430,100);
delay(75);Esplora.tone(500,100);
delay(50);Esplora.tone(570,100);
delay(210);Esplora.tone(585,100);
delay(275);Esplora.tone(550,100);
delay(210);Esplora.tone(500,100);
delay(180);Esplora.tone(380,100);
delay(150);Esplora.tone(500,100);
delay(150);Esplora.tone(500,100);
delay(75);Esplora.tone(500,100);
delay(150);Esplora.tone(500,60);
delay(75);Esplora.tone(500,80);
delay(150);Esplora.tone(500,60);
delay(175);Esplora.tone(500,80);
delay(75);Esplora.tone(580,80);
delay(175);Esplora.tone(660,80);
delay(75);Esplora.tone(500,80);
delay(150);Esplora.tone(430,80);
delay(75);Esplora.tone(380,80);
delay(300);Esplora.tone(500,60);
delay(75);Esplora.tone(500,80);
delay(150);Esplora.tone(500,60);
delay(175);Esplora.tone(500,80);
delay(75);Esplora.tone(580,80);
delay(75);Esplora.tone(660,80);
delay(225);Esplora.tone(870,80);
delay(162);Esplora.tone(760,80);
delay(300);Esplora.tone(500,60);
delay(75);Esplora.tone(500,80);
delay(150);Esplora.tone(500,60);
delay(175);Esplora.tone(500,80);
delay(75);Esplora.tone(580,80);
delay(175);Esplora.tone(660,80);
delay(75);Esplora.tone(500,80);
delay(150);Esplora.tone(430,80);
delay(75);Esplora.tone(380,80);
delay(300);Esplora.tone(660,100);
delay(75);Esplora.tone(660,100);
delay(150);Esplora.tone(660,100);
delay(150);Esplora.tone(510,100);
delay(50);Esplora.tone(660,100);
delay(150);Esplora.tone(770,100);
delay(225);Esplora.tone(380,100);
      }
      else {
        Esplora.writeRGB(255,255,0);
        Serial.println("YELLOW");
      }
      Serial.println();
  }
}
