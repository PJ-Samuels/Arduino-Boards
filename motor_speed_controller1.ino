// C++ code
//
int motorSpeed = 0;

int speakerVolume = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
}




void loop()
{
  motorSpeed = map(analogRead(A0), 0, 1023, 0, 200);
  analogWrite(9, motorSpeed);
  speakerVolume = map(speakerVolume, 0, 1023, 0, 60);
  tone(6, 440 * pow(2.0, (constrain(int(speakerVolume), 35, 127) - 57) / 12.0), 1000);
  delay(10); // Delay a little bit to improve simulation performance
}