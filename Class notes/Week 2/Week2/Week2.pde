void setup() {
  
  size(1000,1000);
  //size of the window
 
  background(255,255,255);
  
  
  //color of the window
  
  strokeWeight(1);
  //the thickness of the line
  
  
  
}

void draw(){ // used to help make objects 
  
  
  //ellipse(mouseX,mouseY,30,30);
  
  //line(mouseX,mouseY,pmouseX,pmouseY);
  
  
  println(mouseX,mouseY);
  //helps you see where your mouse is at
}

void mouseDragged(){
  
  line(mouseX,mouseY,pmouseX,pmouseY);
}

void keyPressed(){
  
  println(key);
  
  //strokeWeight(3);
  if (key == 'a'){
    strokeWeight(10);
    
  }
  if (key == 'b'){
    strokeWeight(7);
    
  }
  if (key == 'c'){
    strokeWeight(5);
  }
   if (key == 'd'){
    strokeWeight(4);
  }
   if (key == 'e'){
    strokeWeight(2);
  }
  //stroke starts here
    if (key == '1'){

    stroke(0,70,225);
  }
  
 if (key == '2'){
   
   stroke(155,230,255);
 }
 
 if (key == '3'){
   
   stroke(120,70,220);
 }
 
 if (key == '4'){
   
   stroke(234,249,133);
 }
  
 if (key == '5'){
   
   stroke(249, 206, 133);
 }
 //background starts here
 if (key == 'f'){
   
   background (0);
 }
 
 if (key == 'g'){
   
   background(97);
   
 }
 
 if (key == 'h'){
   
   background(225);
 }
 
  if (key == 'i'){
   
   background(230,230,250);
 }
 
  if (key == 'j'){
   
   background(255,209,220);
 }
 
 if (key == 'k'){
   
 background(255,221,209);  
 }
 
  if (key == 'l'){
   
 background(113,176,249);  
 }
}