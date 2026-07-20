// void setup() {
//  pinMode(LED_BUILTIN, OUTPUT);

// }

// void loop() {
//  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
//  delay(2550);
// }
// void ledONandOFF(){
//  digitalWrite(LED_BUILTIN, HIGH);
//  delay(500);
//  digitalWrite(LED_BUILTIN, LOW);
//  delay(500);
//  }
// void setup(){
//   ledONandOFF();
// }
void blinkNTimes(int n)
{
  for(int i = 0; i<n; i++)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  }
}

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  blinkNTimes(5);
}
void loop() {
  // Nothing here
}