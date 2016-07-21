int pinSource1 = 7;
int pinSource2 = 8;
int pinSource3 = 9;
int pinProbe1 = A0;
int pinProbe2 = A1;
int pinProbe3 = A2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(pinSource1, OUTPUT);
  pinMode(pinSource2, OUTPUT);
  pinMode(pinSource3, OUTPUT);
  pinMode(pinProbe1, INPUT);
  pinMode(pinProbe2, INPUT);
  pinMode(pinProbe3, INPUT);

  Serial.begin(9600);

}

int value1;
int value2;
int value3;
int value4;
int value5;
int value6;
int value7;
int value8;
int value9;
int value10;
int value11;
int value12;
int value13;
int value14;
int value15;
int value16;
int value17;
int value18;


// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(pinSource1, LOW);
  digitalWrite(pinSource2, LOW);
  digitalWrite(pinSource3, HIGH);
  delay(100);
  value1 = analogRead(pinProbe1);
  value2 = analogRead(pinProbe2);
  value3 = analogRead(pinProbe3);

  digitalWrite(pinSource1, LOW);
  digitalWrite(pinSource2, HIGH);
  digitalWrite(pinSource3, LOW);
  delay(100);
  value4 = analogRead(pinProbe1);
  value5 = analogRead(pinProbe2);
  value6 = analogRead(pinProbe3);

  digitalWrite(pinSource1, LOW);
  digitalWrite(pinSource2, HIGH);
  digitalWrite(pinSource3, HIGH);
  delay(100);
  value7 = analogRead(pinProbe1);
  value8 = analogRead(pinProbe2);
  value9 = analogRead(pinProbe3);

  digitalWrite(pinSource1, HIGH);
  digitalWrite(pinSource2, LOW);
  digitalWrite(pinSource3, LOW);
  delay(100);
  value10 = analogRead(pinProbe1);
  value11 = analogRead(pinProbe2);
  value12 = analogRead(pinProbe3);

  digitalWrite(pinSource1, HIGH);
  digitalWrite(pinSource2, LOW);
  digitalWrite(pinSource3, HIGH);
  delay(100);
  value13 = analogRead(pinProbe1);
  value14 = analogRead(pinProbe2);
  value15 = analogRead(pinProbe3);

  digitalWrite(pinSource1, HIGH);
  digitalWrite(pinSource2, HIGH);
  digitalWrite(pinSource3, LOW);
  delay(100);
  value16 = analogRead(pinProbe1);
  value17 = analogRead(pinProbe2);
  value18 = analogRead(pinProbe3);

  Serial.print("----------First Combination-------------");
  Serial.println();
  Serial.print("LOW"); Serial.print(" "); Serial.print("LOW"); Serial.print(" "); Serial.print("HIGH"); Serial.print(" ");
  Serial.println();
  Serial.print(value1); Serial.print(" ");
  Serial.print(value2); Serial.print(" ");
  Serial.print(value3); Serial.print(" ");
  Serial.println();
  Serial.print("----------Second Combination-------------");
  Serial.println();
  Serial.print("LOW"); Serial.print(" "); Serial.print("HIGH"); Serial.print(" "); Serial.print("LOW"); Serial.print(" ");
  Serial.println();
  Serial.print(value4); Serial.print(" ");
  Serial.print(value5); Serial.print(" ");
  Serial.print(value6); Serial.print(" ");
  Serial.println();
  Serial.print("-----------Third Combination-------------");
  Serial.println();
  Serial.print("LOW"); Serial.print(" "); Serial.print("HIGH"); Serial.print(" "); Serial.print("HIGH"); Serial.print(" ");
  Serial.println();
  Serial.print(value7); Serial.print(" ");
  Serial.print(value8); Serial.print(" ");
  Serial.print(value9); Serial.print(" ");
  Serial.println();
  Serial.print("----------Fourth Combination-------------");
  Serial.println();
  Serial.print("HIGH"); Serial.print(" "); Serial.print("LOW"); Serial.print(" "); Serial.print("LOW"); Serial.print(" ");
  Serial.println();
  Serial.print(value10); Serial.print(" ");
  Serial.print(value11); Serial.print(" ");
  Serial.print(value12); Serial.print(" ");
  Serial.println();
  Serial.print("----------Fifth Combination------------");
  Serial.println();
  Serial.print("HIGH"); Serial.print(" "); Serial.print("LOW"); Serial.print(" "); Serial.print("HIGH"); Serial.print(" ");
  Serial.println();
  Serial.print(value13); Serial.print(" ");
  Serial.print(value14); Serial.print(" ");
  Serial.print(value15); Serial.print(" ");
  Serial.println();
  Serial.print("-----------Sixth Combination------------");
  Serial.println();
  Serial.print("HIGH"); Serial.print(" "); Serial.print("HIGH"); Serial.print(" "); Serial.print("LOW"); Serial.print(" ");
  Serial.println();
  Serial.print(value16); Serial.print(" ");
  Serial.print(value17); Serial.print(" ");
  Serial.print(value18); Serial.print(" ");
  Serial.println();
  Serial.println("-----------------------");

 if ((value10 > 350 && value10 < 390) &&
     (value11 < 250) &&
     (value12 > 350 && value12 < 390))
  {
    Serial.println("The Transistor is PNP");
  }
  else if ((value4 > 300 && value4 < 310) &&
           (value5 > 400 && value5 < 450) &&
           (value6 > 300 && value6 < 320)) 
  {
    Serial.println("The Transistor is NPN");
  }
  else
  {
    Serial.println("No Transistor Detected");
  }
}
