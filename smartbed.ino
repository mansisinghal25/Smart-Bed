

int sensorReading1=0;
int sensorReading2=0;
int knock1 = A0;
int knock2 = A1;
int threshold1 = 12;
int threshold2 = 50;
int motorPin = 3;

const int buzzerPin = 8;



void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
 
  pinMode(10, OUTPUT);
   //Setup pin modes
 pinMode(buzzerPin, OUTPUT);
 
  }

void loop() {

  sensorReading1=analogRead(knock1);
  sensorReading2=analogRead(knock2);
  Serial.println(sensorReading1);
   Serial.println(sensorReading2);
  if((sensorReading1>=threshold1)||(sensorReading2>=threshold2))
  { delay(20000);
    if((sensorReading1>=threshold1)||(sensorReading2>=threshold2))
  
    {digitalWrite(11,HIGH);
     
     digitalWrite(10, HIGH);
     
     tone(buzzerPin, 1000); // Send 1KHz sound signal...
     delay(5000);
     // ...for 5 sec
     noTone(buzzerPin);// Stop sound...
  
 

 

     
    
     

   
     
    }
    else
    {
      digitalWrite(11,LOW);
      digitalWrite(10, LOW);
      }}
      else
    {
      digitalWrite(11,LOW);
      digitalWrite(10, LOW);
      }
      
      
      }
