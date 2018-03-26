int ledPin[] = {5, 6, 7, 8, 9};
 
 
void setup() {
 
  // enable serial (like a console)
  Serial.begin(9600);
  // hello world! print out serial
  Serial.println("Serial Ready");
 
  // generate a new random seed
  randomSeed(analogRead(3));
 
  // ...
  int rando = random(6);
  Serial.println(rando);
 
  // sets all LED pins to OUTPUT
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
 
  delay(100);
 
  // turn them all off
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], LOW);
  }
    // turn them all off
  for (int i = 0; i < rando; i++) {
    digitalWrite(ledPin[i], HIGH);
  }
}
 
void loop() {
 
 
 
}
 
