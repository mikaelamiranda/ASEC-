#define sensorPin A0
//initialize the sensor 
void setup() {
 //print satmenet to get the raw reading
 Serial.begin(10);
}

void loop() {
  int analogReading = analogRead(sensorPin);

  Serial.println("reading: = ");
  Serial.println(analogReading);
//;dummy code
  delay(10);

}
