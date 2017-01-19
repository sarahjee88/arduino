int lightValue = 0; //set integer valuable lightvalue to 0
int delta = 1; // set integer variable delta to 1

void setup() {
  Serial.begin(9600); //set serial connection at baud rate 9600
  pinMode(9, OUTPUT); //activate pin9 to output
}

void loop() {
  lightValue = lightValue + delta; //set lightvalue to sum of lightvalue plus delta
  if (lightValue <= 0 || lightValue >= 255) { //set command to activate under certain condition
    delta = -delta; //set delta to beome negative
  }
  analogWrite(9, lightValue); //set the brightness of pin9
  Serial.println(lightValue); //print lightvalue to serial monitor
  delay(10); //wait for every ten milliseconds
}

