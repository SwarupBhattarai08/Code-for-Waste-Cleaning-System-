
#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1);

int ledpin=12;
int Data;

void setup()
{
mySerial.begin(9600);
pinMode(ledpin,OUTPUT);
}

void loop ()
{

if (mySerial.available())
{
Data=mySerial.read();

if(Data=='1')
{
digitalWrite(ledpin,HIGH);
mySerial.println("LED On! ");
}

else if (Data=='0')
{
digitalWrite(ledpin,LOW);
mySerial.println("LED Off! ");
}

}
}