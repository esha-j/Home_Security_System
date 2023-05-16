#include <SoftwareSerial.h>
 void SendMessage(String SMS);
SoftwareSerial mySerial(2, 3);

void setup()
{
  mySerial.begin(9600);   // Setting the baud rate of GSM Module  
  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
  delay(100);
  pinMode(A0,OUTPUT);
  digitalWrite(A0,HIGH);
}


void loop()
{
  int y1=digitalRead(A2);
  if(y1==0)
  {
    digitalWrite(A0,LOW);
    delay(100);
    digitalWrite(A0,HIGH);
    SendMessage("DOOR");
  }
  int y2=digitalRead(5);//flame
  if(y2==0)
  {
    digitalWrite(A0,LOW);
    delay(100);
    digitalWrite(A0,HIGH);
    SendMessage("Flame");
  }
  int y3=digitalRead(5);//SMOKE
  if(y3==0)
  {
    digitalWrite(A0,LOW);
    delay(100);
    digitalWrite(A0,HIGH);
    SendMessage("SMOKE");
  }
  int sensorValue = analogRead(A5);
  if(sensorValue>40)
  {
    digitalWrite(A0,LOW);
    delay(100);
    digitalWrite(A0,HIGH);
    Serial.print("Motion Detected");
    SendMessage("Motion Detected");
  }
  else
  {
    digitalWrite(A0,HIGH);
  }
}


 void SendMessage(String SMS)
{
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  mySerial.println("AT+CMGS=\"+91XXXXXXXXXX\"\r"); // Replace x with mobile number
  delay(1000);
  mySerial.println(SMS);// The SMS text you want to send
  delay(1000);
   mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
}


 void RecieveMessage()
{
  mySerial.println("AT+CNMI=2,2,0,0,0\r"); // AT Command to receive a live SMS
  delay(1000);
 }
