

int m1=5;
int m2=6;
int m3=7;
int m4=8;
char data;

void setup() {
Serial.begin(9600);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
}

void loop() {
if(Serial.available()){
 data=Serial.read();
 if(data=='f'){
 digitalWrite(m1,HIGH);
 digitalWrite(m2,LOW);
 digitalWrite(m3,HIGH);
 digitalWrite(m4,LOW);
 }else if(data=='b'){
digitalWrite(m1,LOW);
digitalWrite(m2,HIGH);
digitalWrite(m3,LOW);
digitalWrite(m4,HIGH);
 }else if(data=='r'){
 digitalWrite(m1,HIGH);
 digitalWrite(m2,LOW);
 digitalWrite(m3,LOW);
 digitalWrite(m4,LOW);

 
 }else if(data=='l'){
 digitalWrite(m1,LOW);
 digitalWrite(m2,LOW);
 digitalWrite(m3,HIGH);
 digitalWrite(m4,LOW);

   }
  }
 }
