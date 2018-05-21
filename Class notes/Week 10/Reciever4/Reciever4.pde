import processing.serial.*;
Serial myPort;
int val = 0;
void setup(){
  printArray(Serial.list());
  String portName = Serial.list()[1];
  myPort = new Serial(this, portName, 9600);

}
void draw(){
  if ( myPort.available() > 0) {  // If data is available,
    val = myPort.read();
    //print value in console
    println(val);// read it and store it in val
  }
  background(255);  // Set background to white
  //if value hits 101(like when button is pressed)
  //rectangle will turn black 
  if (val == 101) {              // If the serial value is 0,
    fill(0);                   // set fill to black
  } 
  else {                       // If the serial value is not 0,
    fill(204);                 // set fill to light gray
  }
  rect(50, 50, 100, 100);

}  