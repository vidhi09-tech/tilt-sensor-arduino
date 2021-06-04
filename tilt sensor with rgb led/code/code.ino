#define tilt 7
#define led1 11
#define led2 10
#define led3 9
#define buzzer 3

void setup(){
  pinMode(tilt,INPUT);
  digitalWrite(tilt,HIGH);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}
void setColour(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(led1, red_light_value);
  analogWrite(led3, green_light_value);
  analogWrite(led2, blue_light_value);
}
void loop(){
  int tiltValue = digitalRead(tilt);
  if(tiltValue == HIGH){
    setColour(255,255,125);//RASPBERRY
    digitalWrite(buzzer, 500);
    delay(1000);
  }
  if(tiltValue == LOW){
    setColour(255,0,255);//MAGENTA
    digitalWrite(buzzer, 1500);
  }
}
