// C++ code
//
/*
  Environment monitoring system
*/

int gassensor = 0;

void setup()
{
  pinMode(A1, INPUT);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}

void loop()
{
  gassensor = analogRead(A1);
  Serial.println(gassensor);
  if (gassensor > 200) {
    tone(6, 523, 1000); // play tone 60 (C5 = 523 Hz)
  }
  delay(10); // Delay a little bit to improve simulation performance
}