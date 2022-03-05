int echoPin = 4;
int trigPin = 2;

int mesafe;
int sure;


void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
   sure = pulseIn(echoPin, HIGH);
   mesafe = sure /58.2;

  if(mesafe < 10 && mesafe > 0){
    
  Serial.println("bas");
    delay(5000);
  }
  


}
