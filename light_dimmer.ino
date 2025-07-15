const int potPin = 19;
const int ledPin = 5; 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
//  Read the potentiometer value to serial monitor(0 to 4095)
  int potValue = analogRead(potPin);
  // Print the potentiometer value to Serial Monitor for debugging
  Serial.print("Potentiometer value: ");
  Serial.print(potValue);

  // Map the potentiometer value(0-4095) to led brightness (0-255)
 int brightness = map(potValue, 0, 4095, 0, 255);

//  Control the broghtness of the LED using PWM
  analogWrite(ledPin, brightness);
  // Delay for a short time to make it readable
  delay(200);

}