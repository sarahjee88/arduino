void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("It's so nice to see you again!");
  Serial.println("Send 'on' to turn on the LED.");
  Serial.println("Send 'off' to turn off the LED.");
  pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (13, HIGH);
  Serial.println("on");
  delay(1000);
  digitalWrite (13, LOW);
  Serial.println("off");
  delay(1000);
}
