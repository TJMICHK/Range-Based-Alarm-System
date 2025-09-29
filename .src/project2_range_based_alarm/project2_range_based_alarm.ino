// C++ code
//

const int trigPin = 13;
const int echoPin = 12;
const int speakerPin = 2;
const int LED1 = 3;

float duration;
float distance;
  
void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(115200);
  
  pinMode(speakerPin, OUTPUT);
  pinMode(LED1, OUTPUT);
  digitalWrite(LED1,LOW);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.0343)/2;
  
  if (distance < 20) {
    digitalWrite(LED1, HIGH);
    tone(speakerPin, 2000);
    delay(1000);
    digitalWrite(LED1, LOW);
    noTone(speakerPin);
    
    Serial.println("haha");
  }
  else {
    digitalWrite(LED1, LOW);
    Serial.println("sobsob");
  }
  
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);

}