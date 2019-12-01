int trigPin =13;

int echoPin1 =12;
int echoPin2 =11;
int  led1 =10;
int led2 = 9;
int c = 0;

void setup()

{ Serial.begin (9600);

pinMode(trigPin, OUTPUT);

pinMode(echoPin1, INPUT);
pinMode(echoPin2, INPUT);

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);

}

void loop()

{ long duration1, distance1,duration2, distance2;

duration1 = pulseIn(echoPin2, HIGH);

distance1 = (duration1/2) / 29.1;
duration2 = pulseIn(echoPin2, HIGH);

distance2 = (duration2/2) / 29.1;

if (distance1 <= 10)

{ digitalWrite(led1,HIGH);
}

else {

digitalWrite(led1,LOW);

}
if (distance2 <= 10)

{ digitalWrite(led2,HIGH);
}

else {

digitalWrite(led2,LOW);
}
if (led1 == HIGH)
{ c++;}
if (led2 == HIGH)
{c++;
}
Serial.print(c);


}
