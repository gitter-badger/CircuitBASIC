bool isSerialMode;
char preInput[] = "Circ-BASIC> ";
void setup() {
  isSerialMode = false;
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  if (Serial) {
    setupSerial();
  };
  digitalWrite(LED_BUILTIN, LOW);
}
void loop() {
  if (Serial && !isSerialMode) {
    setupSerial();
  }
  if (!Serial && isSerialMode) {
    isSerialMode = false;
  }
  if (isSerialMode) {
    doREPL();
  }

}
