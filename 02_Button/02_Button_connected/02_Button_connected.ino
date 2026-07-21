const int ledPin = 8;
const int buttonPin = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {

if (digitalRead(buttonPin) == LOW)
{
  digitalWrite(ledPin, HIGH);
}
else{
  digitalWrite(ledPin, LOW);
  }
}
// const int ledPin = 8;

// void setup() {
//   pinMode(ledPin, OUTPUT);
// }

// void loop() {
//   digitalWrite(ledPin, HIGH);
// }