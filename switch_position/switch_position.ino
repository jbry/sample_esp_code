void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state;
  state = digitalRead(5);
  if(state == 1)
  {
    Serial.println("Position 1");
  }
  else
  {
    Serial.println("Position 2");
  }
  delay(1500);
}
