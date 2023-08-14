void setup() {
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  
  for (int r = 0; r <= 255; r += 16) {
    for (int g = 0; g <= 255; g += 16) {
      for (int b = 0; b <= 255; b += 16) {
        analogWrite(4, r);   
        analogWrite(3, g);  
        analogWrite(2, b);  
        delay(10);
      }
    }
  }
}