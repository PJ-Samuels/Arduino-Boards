// C++ code
//
int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(2);
  if (buttonState == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    analogWrite(10, 255);
    analogWrite(9, 255);
    analogWrite(11, 255);
  } else {
    analogWrite(10, 102);
    analogWrite(9, 0);
    analogWrite(11, 204);
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}