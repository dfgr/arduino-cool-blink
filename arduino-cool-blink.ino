// This Example used 5 led if you are have more led you can plus the varrible
void setup() {
  Serial.begin(9600);
  for(int i=1; i != 7; i++){
      pinMode(i, OUTPUT);
  }
}
void loop() {
  for(int i= 1; i != 7; i++){
    digitalWrite(i, HIGH);
    delay(100);
  }  
  for(int i =1; i != 7; i++){
    digitalWrite(i, LOW);
  }
  for(int i= 7; i != 0; i--){
    digitalWrite(i, HIGH);
    delay(100);
  }
  for(int i =1; i != 7; i++){
    digitalWrite(i, LOW);
  }
}

