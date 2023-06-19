int redLED=4;
int dit=100;
int dah=500;
int longW=1000;

String myName="Tomas Gorjux";

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
}

void loop() {
  // SOS SIGNAL
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);
  
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  delay(dah);
  digitalWrite(redLED,LOW);
  delay(dah);
  
  digitalWrite(redLED,HIGH);
  delay(dah);
  digitalWrite(redLED,LOW);
  delay(dah);
  
  digitalWrite(redLED,HIGH);
  delay(dah);
  digitalWrite(redLED,LOW);
  delay(dah);

  digitalWrite(redLED,HIGH);
  delay(dah);
  digitalWrite(redLED,LOW);
  delay(dah);
  
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);
  
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);
  
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(longW);

}
