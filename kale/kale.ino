#define sensorPin A0
//initialize the sensor 
void setup() {
 //print satmenet to get the raw reading
 Serial.print("reading: = ");
 Serial.print(analogReading);
}

void loop() {
  int analogReading = analogRead(sensorPin)
  Serial.print(analogReading);
//;dummy code
  delay(1000)
 
}
