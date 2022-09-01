int led01 = 13;

void setup() {
  // put your setup code here, to run once:
   pinMode(led01, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led01, HIGH);
  delay(500);
  digitalWrite(led01, LOW);
  delay(500);
}
