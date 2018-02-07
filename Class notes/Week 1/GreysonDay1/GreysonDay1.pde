size(500,500); 
//the size function creates a window 
noStroke();
// to make no outline on the object
background(255,0,0);
//changes background of the window
rect(40,40,60,60);
//creates a rectangle that is drawn from the upper left corner
fill(110,51,200);
// fills in the object with color
stroke(255,255,255);
//the outline of the object 
strokeWeight(5);
//how thick you want the outline to be
ellipse(222,222,100,100);
// to create a circle
line(0,height,width,0);
/*draws a line (x1,y1,x2,y2) by using the word width you can have the object or 
line be automatically set to start and end at the points of the screen*/