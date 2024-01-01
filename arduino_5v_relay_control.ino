int front = 2, back = 3;
int relay1 = 4, relay2 = 5;

void setup() {
  Serial.begin(9600);
  pinMode(front, INPUT);
  pinMode(back, INPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
}

void loop() {
  if (digitalRead(front) == HIGH )
  {
    digitalWrite(relay1, HIGH);
    digitalWrite(relay2, LOW);
  }
  else if (digitalRead(back) == HIGH)
  {
    digitalWrite(relay2, HIGH);
    digitalWrite(relay1, LOW);
  }
  else
  {
    digitalWrite(relay1, LOW);
    digitalWrite(relay2, LOW);
  }
}
