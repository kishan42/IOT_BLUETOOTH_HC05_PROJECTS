#include<SoftwareSerial.h>
String m = "";
SoftwareSerial bt(6,5); /* (Rx,Tx) */  
void setup()
{
  bt.begin(9600); 
  Serial.begin(9600); 
  pinMode(13,OUTPUT);
 // pinMode(8,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop() 
{
 
    if (bt.available()) 
    {
     m = bt.readString();
     Serial.println(m);

    if(m.equals("1"))
    {
      digitalWrite(13,HIGH);
      //digitalWrite(12,HIGH);
      //digitalWrite(18,HIGH);
     // digitalWrite(7,HIGH);
    }
    if(m.equals("2"))
    {
      digitalWrite(13,LOW);
     // digitalWrite(13,LOW);
     // digitalWrite(12,LOW);
     // digitalWrite(18,LOW);
    }
     if(m.equals("3"))
    {
      digitalWrite(12,HIGH);
      //digitalWrite(12,HIGH);
      //digitalWrite(18,HIGH);
     // digitalWrite(7,HIGH);
    }
    if(m.equals("4"))
    {
      digitalWrite(12,LOW);
     // digitalWrite(13,LOW);
     // digitalWrite(12,LOW);
     // digitalWrite(18,LOW);
    }
     if(m.equals("5"))
    {
      digitalWrite(10,HIGH);
      //digitalWrite(12,HIGH);
      //digitalWrite(18,HIGH);
     // digitalWrite(7,HIGH);
    }
    if(m.equals("6"))
    {
      digitalWrite(10,LOW);
     // digitalWrite(13,LOW);
     // digitalWrite(12,LOW);
     // digitalWrite(18,LOW);
    }
    }
}
