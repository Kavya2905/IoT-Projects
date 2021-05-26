oid setup() {
  pinMode (D2, OUTPUT);

}

void loop() {                         //loop to blink the LED
  for (int i=0; i<1024; i++){
    analogWrite (D2, i);
    delay(10);
  }

}
