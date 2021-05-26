void setup() {
  pinMode(D1, INPUT);
  Serial.begin(9600);  // baudrate (9600 std in india)  - data transmission speed

}

void loop() {
  int s = digitalRead(D1); //digitalread converts input to binary
  Serial.println(s);
  delay(1000);

}
