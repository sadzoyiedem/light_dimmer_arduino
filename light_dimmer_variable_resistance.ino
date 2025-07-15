const int potPin = 2;

void setup(){
  Serial.begin(115200);

}
void loop(){
  int potValue = analogRead(potPin);
  Serial.print("Potentiometer vaue: ");
  Serial.println(potValue);
  delay(200);
}