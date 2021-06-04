vint speedpin=5;
int dir1=4;
int dir2=3;
int mspeed=150;
int tiltpin=2;
int tiltval;
void setup()
{
  pinMode(speedpin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(tiltpin,INPUT);
  digitalWrite(tiltpin,HIGH);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  tiltval=digitalRead(tiltpin);
  Serial.println(tiltval);
  if(tiltval==0)
  {
    analogWrite(speedpin,mspeed);
  }
  if(tiltval==1)
  {
    analogWrite(speedpin,0);
  }
}
