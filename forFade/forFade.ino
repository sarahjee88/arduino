void setup() {
  Serial.begin(9600); //set serial connection at baud rate 9600
  pinMode(9, OUTPUT); //set pin9 to output
}

void loop() {
  for (int lightValue = 0; lightValue <= 255; lightValue++) { //increases and decreases the lightvalue
    analogWrite(9, lightValue); //set brightness of pin9
    Serial.println(lightValue); //print lightvalue on the serial monitor
    delay(10); //wait for every 10 milliseconds
  }
  for (int lightValue = 255; lightValue >= 0; lightValue--) { //increases and decreases the lightvalue
    analogWrite(9, lightValue); //set brightness of pin9
    Serial.println(lightValue); //print lightvalue on the serial monitor
    delay(10); //wait for every 10 milliseconds
  }
}
