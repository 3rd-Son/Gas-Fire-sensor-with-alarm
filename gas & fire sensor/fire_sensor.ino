const int flameSensorPin = 8;
const int buzzerPin = 9;
//const int ledRed = 3;
//const int ledBlue = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // To know if the microprosser is working (to show what you are doing in your monitor)
  pinMode(buzzerPin, OUTPUT);
  pinMode(flameSensorPin, INPUT);
  //pinMode(ledRed, OUTPUT);
  //pinMode(ledBlue, OUTPUT);
  //digitalWrite(ledBlue, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int flameValue = digitalRead(flameSensorPin); // Read anything coming in the flameSensorPin, start reading it
  Serial.println(flameValue); // to show in our mointor the what the flameValue is
  if(flameValue == 0) {
    digitalWrite(buzzerPin, HIGH); // 0 shows that the flame is in, when there is no flame it is 1
    delay(5000);  // The alarm is set to 5seconds
    //digitalWrite(ledRed, HIGH); // to show red when the fire is on
    //digitalWrite(ledBlue, LOW); // to off the blue light when the fire is on
  }
  else{
    digitalWrite(buzzerPin, LOW);
    delay(500);
    //digitalWrite(ledBlue, HIGH);
  }
}
