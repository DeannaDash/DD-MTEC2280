//store pong ball coordinates
//as GLOBAL VARIABLES
float x;
float y;
float xSpeed;
float ySpeed;

void setup(){
  size(500,500);
 //give the global variables values
 //now that the window has been created
  x = width/2;
  y = height/2;
  
  xSpeed = 4;
  ySpeed = 3;
}

void draw(){
  background(0);
  //change the x position
  
  if(x >= width){
    //collision right
    xSpeed = xSpeed * -1;
  }
  // collision left
    if (x <= 0){
      xSpeed = xSpeed * -1;
    }
    //collision top
    if (y <= 0){
      ySpeed = ySpeed * -1;
    }
    //collision bottom 
       if (y >= height){
      ySpeed = ySpeed * -1;
    }
  
  x = x + xSpeed; 
  y = y + ySpeed;
  
  ellipse(x,y,20,20);
  fill( random(255), random(255), random(255)); 

    ellipse(225,y,20,20);
  
  }

   