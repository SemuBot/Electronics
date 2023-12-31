
const int BUTTON_PIN = 32; //Pin 32 on ESP 32 dev kit 4
int buttonState = 0;  

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == HIGH) {
    Serial.println("Detected!");
  } else {
    Serial.println("-----------------------");
  }
}
