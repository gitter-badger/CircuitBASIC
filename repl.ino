void setupSerial() {
  delay(1000);
  Serial.begin(57600);
  Serial.println("   ___  _                ___    _    ___  ___  ___ \r\n  / __|(_) _ _  __  ___ | _ )  /_\\  / __||_ _|/ __|\r\n | (__ | || '_|/ _||___|| _ \\ / _ \\ \\__ \\ | || (__ \r\n  \\___||_||_|  \\__|     |___//_/ \\_\\|___/|___|\\___|");
  delay(1000);
  Serial.println("CircuitBASIC (AKA Circ-BASIC) By UDXS(David Markarian)\nGo to \"udxs.me/CircuitBasic\"\n");
  delay(500);
  isSerialMode = true;
}

void doREPL() {
  Serial.println(preInput);
  while (true) {};
}


