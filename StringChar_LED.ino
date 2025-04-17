// C++ code
//
const int ledpin=7;
const int ledpin1=4;
String readString;
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(ledpin1, OUTPUT);
}

void loop()
{
 while(Serial.available())
 {
   delay(3);
 char d=Serial.read();
 readString+=d;
 }
  if(readString.length()>00 & readString.length()<02)
  {
    Serial.println("single character: "+readString);
    digitalWrite(ledpin,HIGH);
    delay(1000);
    digitalWrite(ledpin,LOW);
  }
  else if(readString.length()>00 & readString.length()>02)
  {
  Serial.println("string: "+readString);
    digitalWrite(ledpin1,HIGH);
     delay(1000);
    digitalWrite(ledpin1,LOW);
  }
  readString = "";
} 
