int ledP1n = 12;
int ledP2n = 11;
int ledP3n = 10;
int ledP4n = 9;
//int ledPin[i]={12,11,10,9};
int button = 7;



void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(ledP1n,OUTPUT);
pinMode(ledP2n,OUTPUT);
pinMode(ledP3n,OUTPUT);
pinMode(ledP4n,OUTPUT);
//pinMode(ledPin[i], OUTPUT);
pinMode(button,INPUT_PULLUP);

}

void loop() {
  int val = analogRead(0);
  int mappedVal = map(val,0, 1023,0,255);
  //analogWrite(mappedVal);

  if (val > 10){
   digitalWrite(ledP1n, LOW);
   digitalWrite(ledP2n, LOW);
   digitalWrite(ledP3n, LOW);
   digitalWrite(ledP4n, LOW);
    
  }

  if (val >30){
    digitalWrite(ledP1n, HIGH);
  }
  if (val >50){
    digitalWrite(ledP2n, HIGH);
  }
  if (val >100){
    digitalWrite(ledP3n, HIGH);
  }
  if (val > 150){
    digitalWrite(ledP4n, HIGH);
  }


}
