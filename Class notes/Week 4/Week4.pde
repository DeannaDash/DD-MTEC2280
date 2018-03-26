size(500,500);
colorMode(RGB, 500);

for(int i = 0; i < width; i = i += 2){
  
  stroke(i,0,0);
  
  line(i,0,i,height);
  
  println(i);
}