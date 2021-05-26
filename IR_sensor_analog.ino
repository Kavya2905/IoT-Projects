void setup() {
  pinMode(D1, INPUT);
  Serial.begin(9600); //baudrate - 9600 ms

}

void loop() {
  int s = analogRead(D1); //analog input
  Serial.println(s);
  delay(1000);

}
