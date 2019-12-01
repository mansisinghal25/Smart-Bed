PImage img;

import processing.serial.*;
Serial myPort;
String val;


void setup ()
 { 
   size(750,600); 
   img=loadImage("night.jpg");
   myPort= new Serial(this, Serial.list()[0],9600);
   myPort.bufferUntil('\n');
   
   val = "wait for it...";
 }
 void draw()
 { 
   background(0);
   image(img,0,0);
   
   
   textSize(40);
   text("Number of disturbances:",150,200); 
   
   textSize(50);
   text("TURNS:",200,300);
   
   textSize(50);
   text(val,400,300); 
   
   
   if(parseInt(val)<=5)
     {textSize(40);
     text("Peaceful Sleep",200,400);  }
     
   else if((parseInt(val)>5)&&(parseInt(val)<=10))
     {textSize(40);
     text("Shallow Sleep",200,400);  }
     
   else
     {textSize(40);
     text("Disturbed Sleep",200,400);  }
 }

void serialEvent(Serial myPort){
  if(myPort.available()>0)
  {
   val=myPort.readStringUntil('\n');
      
   if(val!=null)
   {
     val=trim(val);
     println(val);
   }
   }
}
