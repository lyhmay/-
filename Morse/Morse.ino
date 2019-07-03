#include "Morse.h"
#define _dot  morse.dot()
#define _dash morse.dash()
int incomingchar=0;
Morse morse(13);

void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
  if(Serial.available()>0)
  {
      incomingchar=Serial.read();
      switch (incomingchar)
      {
        
        case 97:_dot,_dash;break;
        case 98:_dash,_dot,_dot,_dot;break;
        case 99:_dash,_dot,_dash,_dot;break;
        case 100:_dash,_dot,_dot;break;
        case 101:_dot;break;
        case 102:_dot,_dot,_dash,_dot;break;
        case 103:_dash,_dash,_dot;break;
        case 104:_dot,_dot,_dot,_dot;break;
        case 105:_dot,_dot;break;
        case 106:_dot,_dash,_dash,_dash;break;
        case 107:_dash,_dot,_dash;break;
        case 108:_dot,_dash,_dot,_dot;break;
        case 109:_dash,_dash;break;
        case 110:_dash,_dot;break;
        case 111:_dash,_dash,_dash;break;
        case 112:_dot,_dash,_dash,_dot;break;
        case 113:_dash,_dash,_dot,_dash;break;
        case 114:_dot,_dash,_dot;break;
        case 115:_dot,_dot,_dot;break;
        case 116:_dash;break;
        case 117:_dot,_dot,_dash;break;
        case 118:_dot,_dot,_dot,_dash;break;
        case 119:_dot,_dash,_dash;break;
        case 120:_dash,_dot,_dot,_dash;break;
        case 121:_dash,_dot,_dash,_dash;break;
        case 122:_dash,_dash,_dot,_dot;break;
        case 10:delay(375);break;
        case 32:delay(375);break;
      }
      delay(375);
  }
  delay(3000);
}
