void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}
int income = 0;
void loop()
{
   if (Serial.available()>0)
    {
      income=Serial.read();
      switch(income){
      case 'f':
        forward();
        break;
        case 'b':
          backward();
        break;
        case 'l':
         left();
        break;
        case'r':
        right();
        break;
       default:
        break;
      }
    }
}

void forward()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  
}
void backward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
}
void left()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(13,LOW);
}

void right()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(12,LOW);
}
