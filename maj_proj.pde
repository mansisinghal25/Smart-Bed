PImage img;

/*void setup ()
 { size(750,600); 
   img=loadImage("night.jpg"); }
 
 void draw()
 { background(0);
   image(img,0,0);
   
   textSize(50);
   text("SMART BED",180,200); 
    
 } */
 
//import cc.arduino.*;
//import org.firmata.*;

import processing.serial.*;
Serial myPort;
int val1;
float reading=0;
String store;

int ard1;
int counter=0;
String val;



void setup ()
 { 
   size(750,600); 
   img=loadImage("night.jpg");
   myPort= new Serial(this, Serial.list()[0],9600);
   myPort.bufferUntil('\n');
 }
 
 
 
 void draw()
 { 
   background(0);
   image(img,0,0);
   
   textSize(50);
   text(ard1,180,200);
   //  text(val,180,200); 
  //  serialEvent(); 
 }

void serialEvent(Serial myPort){
  if(myPort.available()>0)
  {
   val=myPort.readStringUntil('\n');
   println(val);
   //val=trim(val);
   if(val!=null)
   {
     val=trim(val);
     //text(val,180,200);
     /*if(val.equals("PLAYER 1 WINS"))
     {
       ard1=10;
     }
     else
     {
     String vals[]=split(val,",");
     
     ard1=int(vals[0]);
     }*/
   }
   }
}
