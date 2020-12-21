void setup() {
  for(int pin=5; pin<=10; pin++){
    pinMode(pin,OUTPUT);
  }
}
void loop() {
  for(int i=0; i<=2; i++)
  {
    for(int pin=5; pin<=7; pin++){
      digitalWrite(pin,HIGH);
    }
    delay(200);
    for(int pin=5; pin<=7; pin++){
      digitalWrite(pin,LOW);
    }
    delay(200);
  }
  for(int i=0; i<=2; i++)
  {
    for(int pin=8; pin<=10; pin++){
      digitalWrite(pin,HIGH);
    }
    delay(200);
    for(int pin=8; pin<=10; pin++){
      digitalWrite(pin,LOW);
    }
    delay(200);
  }
  for(int i=0; i<=1; i++)
  {
    for(int pin=5; pin<=10; pin++){
      digitalWrite(pin,HIGH);
      delay(150);
      digitalWrite(pin,LOW);
      delay(150);
    }
    for(int pin=9; pin>=6; pin--)
    {
      digitalWrite(pin,HIGH);
      delay(150);
      digitalWrite(pin,LOW);
      delay(150);
    }
  }
}
