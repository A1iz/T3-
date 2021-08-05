#define echoPin 7
#define trigPin 5


long duration; 
int distance; 

void setup() {
  
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  
}
void loop() {
  
  while ( g( )> 20 ){}
  int b=millis();
  Serial.write('0');
  
  while (g () < 20 ) {
    int v = millis();
    if (v - b > 3000 )
    {Serial.write('1');
    }
  }
}
int g (){
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);  
  digitalWrite(trigPin, HIGH);  
  delayMicroseconds(10);  
  digitalWrite(trigPin, LOW);  

  duration = pulseIn(echoPin, HIGH);

  distance = (duration*.0343)/2; 
  
 return distance;
}
  
