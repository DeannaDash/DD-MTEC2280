/*have 3 leds blink.then have them 
blink out of order,very slowly.then have them blink and go off again*/

int ledPin1 = 7;
int ledPin2 = 8;
int ledPin3 = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
pinMode(ledpin3,OUTPUT);
}

void loop() {
  //
 delay(500);
 digitalWrite(ledPin1,HIGH);
 digitalWrite(ledPin2,HIGH);
 digitalWrite(ledPin3,HIGH);
 delay(1000)
 digitalWrite(ledPin1,LOW);
 digitalWrite(ledPin2,LOW);
 digitalWrite(ledPin3,LOW);

//heres where they blink out of order
 delay(5000);
 digitalWrite(ledPin1,HIGH);
 digitalWrite(ledPin2,LOW);
 digitalWrite(ledPin3,LOW);
 delay(5000)
 digitalWrite(ledPin1,LOW);
 digitalWrite(ledPin2,LOW);
 digitalWrite(ledPin3,HIGH);
  delay(5000)
 digitalWrite(ledPin1,LOW);
 digitalWrite(ledPin2,HIGH);
 digitalWrite(ledPin3,LOW);
  delay(5000)
 digitalWrite(ledPin1,LOW);
 digitalWrite(ledPin2,LOW);
 digitalWrite(ledPin3,HIGH);
 delay(5000);
 digitalWrite(ledPin1,HIGH);
 digitalWrite(ledPin2,LOW);
 digitalWrite(ledPin3,LOW);
  delay(5000);
 digitalWrite(ledPin1,HIGH);
 digitalWrite(ledPin2,HIGH);
 digitalWrite(ledPin3,HIGH);


}
