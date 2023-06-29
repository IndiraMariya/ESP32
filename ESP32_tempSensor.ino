const int tempPin = 4;  //analog input pin constant<br>
int tempVal;            // temperature sensor raw readings
float volts;            // variable for storing voltage
float temp;             // actual temperature variable
void setup() {
  // start the serial port at 115200 baud
  Serial.begin(115200);
}
void loop() {
  //read the temp sensor and store it in tempVal
  tempVal = analogRead(tempPin);
  volts = tempVal / 1023.0;    // normalize by the maximum temperature raw reading range
  temp = (volts - 0.5) * 100;  //calculate temperature celsius from voltage as per the equation found on the sensor spec sheet.
  Serial.println(temp);  // in the same line print the temperature
  delay(500);
}
