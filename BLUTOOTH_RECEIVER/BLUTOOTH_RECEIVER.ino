#include<SoftwareSerial.h>
//String m = "";
//SoftwareSerial bt(6,5); /* (Rx,Tx) */  
void setup()
{
//  bt.begin(9600); 
  Serial.begin(9600); 
 // pinMode(13,OUTPUT);
//  pinMode(8,OUTPUT);
//  pinMode(12,OUTPUT);
//  pinMode(9,OUTPUT);

}
void loop() 
{
 
 //   if(bt.available()) 
 //   {
///     m = bt.readString();
    Serial.println("12,7654,7765,5675,34");
    delay(1000);
      Serial.println("3,74,77,55,0");
      delay(1000);

  /*  if(m.equals("1"))
    {
      digitalWrite(13,HIGH);
     // digitalWrite(12,HIGH);
     // digitalWrite(18,HIGH);
     // digitalWrite(7,HIGH);
    }
    if(m.equals("2"))
    {
      digitalWrite(13,LOW);
    //  digitalWrite(13,LOW);
    //  digitalWrite(12,LOW);
    //  digitalWrite(18,LOW);
    } */
//   }
}
