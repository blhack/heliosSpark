int sparkPins[] = {2,3,4,5,6,7,8,9,10,11,13};

void setup() {
  pinMode(12, INPUT_PULLUP);
  for (int i=0; i<11; i++) {
    pinMode(sparkPins[i], OUTPUT);
  }
}


void loop() {
  if (digitalRead(12) == LOW) {
    for (int i=0; i<11; i++) {
      digitalWrite(sparkPins[i], HIGH);
      delay(1);
      digitalWrite(sparkPins[i], LOW);
    }
  }
}
