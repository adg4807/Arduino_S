const int pinBuzzer = 3;
const int pinButton[8] = {4, 5, 6, 7, 8, 9, 10, 11};
int buttonStates[8] = {0}; 
int buttonState;
int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};

void setup() {
  pinMode(pinBuzzer, OUTPUT);
  for (int i = 0; i < 8; i++) {
    pinMode(pinButton[i], INPUT);
}
}
void loop() {
  for (int i = 0; i < 8; i++) {
    buttonState = digitalRead(pinButton[i]);
    if (buttonState == HIGH && buttonStates[i] == LOW) {
      playSound(melody[i]);
    } else if (buttonState == LOW && buttonStates[i] == HIGH) {
      stopSound();
    }
    buttonStates[i] = buttonState;
  }
}

void playSound(int frequency) {
  tone(pinBuzzer, frequency);
}

void stopSound() {
  noTone(pinBuzzer);
}
