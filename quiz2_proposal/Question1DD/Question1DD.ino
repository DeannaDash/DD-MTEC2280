
/*have 5 led pins light up each with a different sound pitch*/

int ledPin[] = {5,6,7,8,9};
int speakerPin = 4;

void setup() {
  
for(int i = 0; i < 5; i++){
 (ledPin[i], OUTPUT); 
}
//for the speaker
pinMode(4,OUTPUT);


}

void loop() {
 for( int i = 0; i < 5; i++;){
  digitalWrite(ledPin[i],LOW);
  /*maybe if i put it in the loop 
  the sound will follow the Led pins*/
  digitalWrite(4,LOW);
  delayMicroseconds(1200);
 
 }
 for( int i = 0; i < 5; i++;){
  digitalWrite(ledPin[i],HIGH);
  digitalWrite(4,HIGH);
  delayMicroseconds(1200);
  /*wondering if i need a delay for the pins as well
  or if they will follow the speaker delay*/

}
