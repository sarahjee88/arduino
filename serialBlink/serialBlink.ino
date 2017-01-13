void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // start the serial and set the baud rate to 9600
  Serial.setTimeout(10);  // set arduino to scan the buffer every 0.001 sec
  Serial.println("It's so nice to see you again!");  // set arduino to print message
  Serial.println("Send 'On' to turn on the LED.");  // set arduino to print message
  Serial.println("Send 'Off' to turn off the LED.");  // set arduino to print message
  pinMode (13, OUTPUT);  // set pin13 to output
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) { // check if anything is in the serial buffer
    String command; // creates string variable called command
    command = Serial.readString(); // set arduino to read message of the value ogitf the command
    if (command == "On") { // set arduino to do command if "On" is typed
      digitalWrite(13, HIGH); // turn the light on of pin13
      Serial.println("light ON!"); // set arduino to send message
    }
    else if (command == "Off") { // set ardiono to do command if "Off" is typed
      digitalWrite(13, LOW); // turn the light off of pin13
      Serial.println("light OFF!"); // set arduino to send message
    }
  }
}
