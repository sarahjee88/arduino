void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
  Serial.println("It's so nice to see you again!");
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");
  pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    String command;
    command = Serial.readString();
    if (command == "On") {
      digitalWrite(13, HIGH);
      Serial.println("light ON!");
    }
    else if (command == "Off") {
      digitalWrite(13, LOW);
      Serial.println("light OFF!");
    }
  }
}
