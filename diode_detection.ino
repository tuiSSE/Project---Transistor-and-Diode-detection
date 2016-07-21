

int pin1Source = 7;
int pin2Source = 8;
int pin1Probe = A0;
int pin2Probe = A1;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(pin1Source, OUTPUT);
  pinMode(pin2Source, OUTPUT);
  pinMode(pin1Probe, INPUT);
  pinMode(pin2Probe, INPUT);
  Serial.begin(9600);

}

int value1;
int value2;
int value3;
int value4;

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(pin1Source, HIGH);
  digitalWrite(pin2Source, LOW);
  delay(100);
  value1 = analogRead(pin1Probe);
  value2 = analogRead(pin2Probe);

  digitalWrite(pin1Source, LOW);
  digitalWrite(pin2Source, HIGH);
  delay(100);
  value3 = analogRead(pin1Probe);
  value4 = analogRead(pin2Probe);

  Serial.print(value1); Serial.print(" ");
  Serial.print(value2); Serial.print(" ");
  Serial.print(value3); Serial.print(" ");
  Serial.print(value4); Serial.print(" ");
  Serial.println();

  if ((value1 > 500 && value1 < 700) &&
      (value2 > 300 && value2 < 500) &&
      value3 < 10 &&
      value4 > 1020)
  {
    Serial.println("The Diode is Forward Biased");
  }
  else if ((value1 > 1020 && 
            value2 < 10) && 
           (value3 > 300 && value3 < 500) && 
           (value4 > 500 && value4 < 700))
  {
    Serial.println("The Diode is Reverse Biased");
  }
  else
  {
    Serial.println("No Diode Detected");
  }
}
