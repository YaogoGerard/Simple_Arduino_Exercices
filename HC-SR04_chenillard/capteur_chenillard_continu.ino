#include <HCSR04.h>




int led1=2;
int led2 =3;
int led3= 4;
int led4= 5;
int led5 =6;
int led6 =7;
int led7 =8;
int led8 =9;
int led9 =10;

float distance;

HCSR04 hc(12, 13);
// the setup routine runs once when you press reset:
void setup() {   
   Serial.begin(9600);             
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT );
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(hc.dist()); 
    delay(150);                 
distance=hc.dist();

if(distance<=2.2)
{
  
  digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
  digitalWrite(led8,0);
  digitalWrite(led9,0);
  }
  
else if(distance>2.2&&distance<=4.4)
{
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
  digitalWrite(led8,0);
  digitalWrite(led9,0); 
  }
else if(distance>4.4&&distance<=6.6)
{
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
  digitalWrite(led8,0);
  digitalWrite(led9,0); 
  }
else if(distance>6.6&&distance<=8.8)
{
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,1);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
  digitalWrite(led8,0);
  digitalWrite(led9,0); 
  }
else if(distance>8.8&&distance<=10.10)
{
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,1);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
  digitalWrite(led8,0);
  digitalWrite(led9,0);
  }
  else if(distance>10.10&&distance<=12.12)
{
   digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,1);
  digitalWrite(led7,0);
  digitalWrite(led8,0);
  digitalWrite(led9,0); 
  }
  else if(distance>12.12&&distance<=14.14)
{
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,1);
  digitalWrite(led8,0);
  digitalWrite(led9,0); 
  }
  else if(distance>14.14&&distance<=16.16)
{
   digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
  digitalWrite(led8,1);
  digitalWrite(led9,0); 
  }
  else if(distance>16.16&&distance<=18.18)
{
   digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
  digitalWrite(led8,1);
  digitalWrite(led9,0); 
  }
  
else
{
  digitalWrite(led1,0); 
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);
  digitalWrite(led8,0);
  digitalWrite(led9,0);
  }

  
   
 

}
