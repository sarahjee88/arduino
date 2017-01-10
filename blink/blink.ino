void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
  // turns on the light of pin13
  delay(100);
  // turnes on for 0.1 sec
  digitalWrite(12, LOW);
  // turns off the light of pin13
  delay(100);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  delay(1000);
}
