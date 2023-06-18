int buzzer = 10;
int led = 11;
int gas = A0;  // Using an analog pin
int sensorThres = 400; // Threshold means boundary (to detect only 40% smoke)

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(gas, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int analogSensor = analogRead(gas);
  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  
  if(analogSensor > sensorThres){
    tone(buzzer, 500, 1000);
    digitalWrite(led, HIGH);
  }
  else{
    noTone(buzzer);
  }
  delay(100);
}
