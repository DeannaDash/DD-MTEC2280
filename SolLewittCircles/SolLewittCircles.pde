size (500,500);
noFill();

for (int i = 0; i < width *2; i += 40){
  //top
  ellipse (width/2, 0,i,i);
  //right
  ellipse (width, height/2, i, i);
  //left
   ellipse (0, height/2, i, i);
   //bottom
    ellipse (width/2,height,i,i);
}