/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
int number;
int randelay;
int knock1 = A0;
int knock2 = A1;
int knock3 = A2;
int knock4 = A3;
int threshold  =1;

 int sensorReading1=0;
 int sensorReading2=0;
 int sensorReading3=0;
 int sensorReading4=0;

 int score1=0;
 int score2=0;

 
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
  pinMode(11,OUTPUT);
 
}

// the loop function runs over and over again forever
void loop()
{
  

  int a=0;
  number = random(12,14);
  randelay = 500;
  
  digitalWrite(number, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(randelay);                       // wait for random time
                         // wait for random time

  sensorReading1=analogRead(knock1);
  sensorReading2=analogRead(knock2);
  sensorReading3=analogRead(knock3);
  sensorReading4=analogRead(knock4);
  
  if(digitalRead(12)==HIGH)
    { if((sensorReading1>=threshold)&&(sensorReading4<threshold))     // player 1- pin 12 - a0      pin 13- a3     
        score1++;

       if((sensorReading2>=threshold)&&(sensorReading3<threshold))
        score2++;
      }

   if(digitalRead(13)==HIGH)
    { if((sensorReading4>=threshold)&&(sensorReading1>threshold))   // player 2-  pin 12- a1    pin 13-a2
        score1++;

       if((sensorReading3>=threshold)&&(sensorReading2>threshold))
        score2++;
    }

      digitalWrite(number, LOW);    // turn the LED off by making the voltage LOW
      delay(randelay);

if(a==0)
{
Serial.print((String)score1 + "," + score2 + "\n");
}


 
}
    
//Make a counter for player1 and player2 separately. Six conditions, peizosensors on A0,A1,A2,A3,A4,A5
