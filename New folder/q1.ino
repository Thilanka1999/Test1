

void setup() {
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  delay(100);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(1000);
  
  // put your main code here, to run repeatedly:

}
