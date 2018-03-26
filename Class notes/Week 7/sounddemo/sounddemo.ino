

void setup() {
  // put your setup code here, to run once:
pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 1000; i < 1000; i -=100) {
digitalWrite(4,HIGH);
delayMicroseconds(i);

digitalWrite(4,LOW);
delayMicroseconds(i);

digitalWrite(4,HIGH);
delayMicroseconds(i);
}
for (int i = 1000; i > 50; i -=100) {
digitalWrite(4,LOW);
delayMicroseconds(i);

digitalWrite(4,HIGH);
delayMicroseconds(i);
}
}
