void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

int income=0;

void loop()
{
  
   if (Serial.available()>0)
  {
  income=Serial.read();
  income=income-'0';
  digitalWrite(4,LOW);
  delay(10);
  set_pin(0,income&1);
  set_pin(1,(income>>1)&1);
  set_pin(2,(income>>2)&1); 
  set_pin(3,(income>>3)&1);
  digitalWrite(4,HIGH);
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
