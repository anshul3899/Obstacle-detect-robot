const int trigPin = 13;
const int echoPin = 12;
const int in1 = 2;
const int in2 = 3;
const int in3 = 4;
const int in4 = 5;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode (in1, OUTPUT);
  pinMode (in2, OUTPUT);
  pinMode (in3, OUTPUT);
  pinMode (in4, OUTPUT);
 }
long duration, distance;

void loop()
{     
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58;
  if(distance<20)
    {
      digitalWrite(in1, LOW); 
      digitalWrite(in2, HIGH); 
      digitalWrite(in3, HIGH); 
      digitalWrite(in4, LOW);
      }
  else
    {
      digitalWrite(in1, HIGH); 
      digitalWrite(in2, LOW); 
      digitalWrite(in3, HIGH); 
      digitalWrite(in4, LOW);
      }  
  delayMicroseconds(50);
}

