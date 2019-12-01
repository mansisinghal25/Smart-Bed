int pirPin = 2;                 // PIR Out pin 
int pirStat = 0;               // PIR status
int sleepvar = 0;
//int threshold2 = 

void setup() {
  
pinMode(pirPin, INPUT);     //Motion sensor
Serial.begin(9600);
}

void loop() {
delay(5000);
pirStat = digitalRead(pirPin); 
if(pirStat == HIGH){
  sleepvar++;
} 

if(sleepvar>=200){
  Serial.println("Your sleep was light with ");
  Serial.println(sleepvar);}
if(sleepvar<=300){
  Serial.println("Your sleep was deep with ");
  Serial.println(sleepvar);}

}
