#include<stdio.h>
int a=2,b=3,c=4,d=5;
void setup(){

// here is the setup code
serial.begin(9600);
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
}
void loop(){
if(serial.available()>0)
{
char data;
data=serial.read();
serial.write(serial.read());
serial.println(data);
switch(data);
{
Case '1':
 serial.println("BULB1");
 digital.Write(a,low);
 break;
Case '2':
 serial.println("BULB2");
 digital.Write(b,low);
 break;
Case '3':
 serial.println("BULB3");
 digital.Write(c,low);
 break;
Case '4':
 serial.println("BULB4");
 digital.Write(d,low);
 break;
Case 'I':
 serial.println("OFF ALL");
 digital.Write(a,HIGH);
 digital.Write(b,HIGH);
 digital.Write(c,HIGH);
 digital.Write(d,HIGH);
 break;
}
}
}
void main(){
setup();
loop();
}