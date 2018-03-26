
//my pin
int ledPin1 = 12;
int counter = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin1, OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(ledPin1, LOW);
delay(500);
digitalWrite(ledPin1, HIGH);
delay(500);
  

// to show the message
if (digitalRead(ledPin1) == HIGH){
  counter = counter +1;
  Serial.print("LED has blinked ");
  Serial.print(counter);
  Serial.println(" times");
}
}
