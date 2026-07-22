const int ledPin = 8;
const int buttonPin = 2;

bool ledState = false;
bool lastButtonState = HIGH;
bool currentButtonState;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {

  currentButtonState = digitalRead(buttonPin);

  if (lastButtonState == HIGH && currentButtonState == LOW) {
  ledState = !ledState;
  delay(50);   // Temporary debounce
}

  if (ledState) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  lastButtonState = currentButtonState;
}