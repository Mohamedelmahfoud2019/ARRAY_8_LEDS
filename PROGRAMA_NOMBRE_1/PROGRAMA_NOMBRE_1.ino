const int ledB = 5;          // donar nom al pin 5 de l’Arduino
const int ledA = 6;          // donar nom al pin 6 de l’Arduino
const int ledF = 7;          // donar nom al pin 7 de l’Arduino
const int ledG = 8;          // donar nom al pin 8 de l’Arduino
const int ledD = 9;          // donar nom al pin 9 de l’Arduino
const int ledC = 10;         // donar nom al pin 10 de l’Arduino
const int ledE = 11;         // donar nom al pin 11 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(ledB, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(ledA, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(ledF, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledG, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledD, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledC, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledE, OUTPUT);     // definir el pin 11 com una sortida
}
void loop()
{
  
  digitalWrite(ledB, LOW);    // posar a 5V el pin 5
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledF, LOW);    // posar a 5V el pin 7
  digitalWrite(ledG, LOW);    // posar a 5V el pin 8
  digitalWrite(ledD, LOW);    // posar a 5V el pin 9
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 11
  delay (1000);
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledG, LOW);    // posar a 5V el pin 8
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 11
  delay (1000);
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledA, LOW);    // posar a 5V el pin 6
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, LOW);    // posar a 5V el pin 9
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 11
  delay (1000);
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, LOW);    // posar a 5V el pin 9
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 11
  delay (1000);
  digitalWrite(ledB, LOW);    // posar a 5V el pin 5
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledF, LOW);    // posar a 5V el pin 7
  digitalWrite(ledG, LOW);    // posar a 5V el pin 8
  digitalWrite(ledD, LOW);    // posar a 5V el pin 9
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 11
  delay (1000);
  digitalWrite(ledB, LOW);    // posar a 5V el pin 5
  digitalWrite(ledA, HIGH);    // posar a 5V el pin 6
  digitalWrite(ledF, HIGH);    // posar a 5V el pin 7
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledC, LOW);    // posar a 5V el pin 10
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 11
  delay (1000);
  digitalWrite(ledB, HIGH);    // posar a 5V el pin 5
  digitalWrite(ledA, LOW);    // posar a 5V el pin 6
  digitalWrite(ledF, LOW);    // posar a 5V el pin 7
  digitalWrite(ledG, HIGH);    // posar a 5V el pin 8
  digitalWrite(ledD, HIGH);    // posar a 5V el pin 9
  digitalWrite(ledC, HIGH);    // posar a 5V el pin 10
  digitalWrite(ledE, HIGH);    // posar a 5V el pin 11
  delay (1000);
}
