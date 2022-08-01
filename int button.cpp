int buttonPin = 7;
int buttonLED = 11;
int blinkLED = 12;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonLED, OUTPUT);
  pinMode(blinkLED, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(buttonLED, LOW);
  }

  if (buttonState == LOW) {
    digitalWrite(buttonLED, HIGH);
  }

  digitalWrite(blinkLED, HIGH);
  delay(200);
  digitalWrite(blinkLED, LOW);
  delay(200);
}
