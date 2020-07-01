#include <SoftwareSerial.h>
SoftwareSerial HC05(10,11); // TX, RX
const int in1 = 8 ;
const int in2 = 9 ;
const int in3 = 10 ; 
const int in4 = 11 ;
char x ; 
void setup() {
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  HC05.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (HC05.available()) 
  {
   x = HC05.read();
  }
  if (x == 'f') //Forward
  {
   digitalWrite(in1,HIGH);
   digitalWrite(in2,LOW);
   digitalWrite(in3,HIGH);
   digitalWrite(in4,LOW);
  }
  else if (x == 'b') //Reverse
  {
   digitalWrite(in1,LOW);
   digitalWrite(in2,HIGH);
   digitalWrite(in3,LOW);
   digitalWrite(in4,HIGH);
  }
  else if (x == 'r') // TURN RIGHT
  {
   digitalWrite(in1,LOW);
   digitalWrite(in2,LOW);
   digitalWrite(in3,HIGH);
   digitalWrite(in4,LOW);
  }
  else if (x == 'l') //TURN LEFT
  {
   digitalWrite(in1,HIGH);
   digitalWrite(in2,LOW);
   digitalWrite(in3,LOW);
   digitalWrite(in4,LOW);
  }
  else if (x == 's') //STOP
  {
    digitalWrite(in1,LOW);
   digitalWrite(in2,LOW);
   digitalWrite(in3,LOW);
   digitalWrite(in4,LOW);
  }
}
