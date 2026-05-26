#include <Servo.h>

Servo myservo;
int buzzer = 2;

void setup() {
  myservo.attach(9);
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  
 int humidityr = Serial.read();
   
if(humidityr>=0 && humidityr<20){
  myservo.write(15);
  };   
if(humidityr>=20 && humidityr<40){
  myservo.write(30);
  };    
 if(humidityr>=40 && humidityr<60){
  myservo.write(45);  
};
 if(humidityr>=60 && humidityr<80){
  myservo.write(60);
 };
 if(humidityr>=80 && humidityr<120){
  myservo.write(75);
 };
  if(humidityr>=120 && humidityr<140){
  myservo.write(90);
 };
  if(humidityr>=140 && humidityr<160){
  myservo.write(105);
 };
  if(humidityr>=160 && humidityr<180){
  myservo.write(120);
 };
  if(humidityr>=180 && humidityr<200){
  myservo.write(135);
 };
  if(humidityr>=200 && humidityr<220){
  myservo.write(150);
 };
 if(humidityr>=220 && humidityr<240){
  myservo.write(165);
 };
if(humidityr>=240 && humidityr<=260){
  myservo.write(180);
 };
 }
 
