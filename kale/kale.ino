#define sensorPin A0
//initialize the sensor 
void setup() {
 //print satmenet to get the raw reading
 Serial.begin(10);
}

void loop() {
  int analogReading = analogRead(sensorPin);
  if (analogReading <10) 
  Serial.println("does not qualify");
  else if (analogReading >10) && (analogReading <40)
  Serial.println("light touch");
  else if (analogReading >40) && (analogReading <70)
  Serial.println("medium touch");
  else if (analogReading >70) 
  Serial.println("Qualified");
  else
  Serial.println(":0");
 
  serial
  
//;dummy code
  delay(10);

}
