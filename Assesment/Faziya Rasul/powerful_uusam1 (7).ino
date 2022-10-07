int t=2;
int e=3;
void setup()
{
  pinMode(4,INPUT);
  Serial.begin(9600);
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  }
void loop()
{
 digitalWrite(t,LOW);
 digitalWrite(t,HIGH);
 delayMicroseconds(10);
 digitalWrite(t,LOW);
 
 float dur=pulseIn(e,HIGH);
 float dis=(dur*0.343)/2;
 Serial.println("the distance is:");
 Serial.println(dis);
  if(dis<1000){
    tone(12,30);
    delay(1000);
  }
  else{
    noTone(12);
    delay(1000);
   }
 
 double a = analogRead(A0);
  double c=(((a/1024)*5)-0.5)*100;
  Serial.print("Celcius value:");
  Serial.print(c);
  delay(1000);
  if(c>50)
    digitalWrite(13,HIGH);
  else
    digitalWrite(13,LOW);
 
  int p=digitalRead(4);
  Serial.println(p);
  if(p==1){
    digitalWrite(11,HIGH);
    Serial.println("Motion detected!!!");
    delay(1000);
  }
  else{
    digitalWrite(11,LOW);
    Serial.println("Motion not detected!!!");
  delay(1000);
  }
 
}