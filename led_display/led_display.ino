void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

int income=0;

void loop()
{
  
   if (Serial.available()>0)
  {
  income=Serial.read();
  income=income-'0';
  digitalWrite(6,LOW);
  delay(10);
  set_pin(2,income&1);
  set_pin(3,(income>>1)&1);
  set_pin(4,(income>>2)&1); 
  set_pin(5,(income>>3)&1);
  digitalWrite(6,HIGH);
  delay(10);   
  }
}

void set_pin(int p,int v)
{
  
  if(v!=0)
  {
    digitalWrite(p,HIGH);
  }
  else 
  {
     digitalWrite(p,LOW);
  }
}
