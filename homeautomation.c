#include <IRremote.h>

int IRpin = 11;  // pin for the IR sensor
int FIRST = 12;
/*int SECOND = 8;
int THIRD = 12;
int FOURTH = 13; */
int POWER = 13;
int a;  
int a_togglestate = 0;
/*int b_togglestate = 0;
int c_togglestate = 0;
int d_togglestate = 0;
int e_togglestate = 0;
int f_togglestate = 0;
int g_togglestate = 0;
int h_togglestate = 0;

*/
IRrecv irrecv(IRpin);
decode_results results;

void setup()
{
 pinMode(IRpin, INPUT);
 pinMode(FIRST, OUTPUT);
 /*pinMode(SECOND, OUTPUT);
 pinMode(THIRD, OUTPUT);
 pinMode(FOURTH, OUTPUT);*/
 pinMode(POWER, OUTPUT);
   Serial.begin(9600);
  irrecv.enableIRIn(); 

}

void loop() 
{
digitalWrite(POWER,HIGH);

  if(irrecv.decode(&results)) 
 {
       Serial.println(results.value);

    switch(results.value)
  {
     case 2160030604:

     if(a_togglestate==0)
     { 
       digitalWrite(FIRST,HIGH);
       a_togglestate=1;
     }
     else 
     {
       digitalWrite(FIRST,LOW);
       a_togglestate=0;
     }
     break;

    /*   case 33444015:

     if(b_togglestate==0)
     { 
       digitalWrite(FIRST,HIGH);
       b_togglestate=1;
     }
     else 
     {
       digitalWrite(FIRST,LOW);
       b_togglestate=0;
     }
     break;

     case 2160052534:

     if(c_togglestate==0)
     { 
       digitalWrite(SECOND,HIGH);
       c_togglestate=1;
     }
     else 
     {
       digitalWrite(SECOND,LOW);
       c_togglestate=0;
     }
     break;

     case 33478695:

     if(d_togglestate==0)
     { 
       digitalWrite(SECOND,HIGH);
       d_togglestate=1;
     }
     else 
     {
       digitalWrite(SECOND,LOW);
       d_togglestate=0;
     }
     break;

     case 2160014284:

     if(e_togglestate==0)
     { 
       digitalWrite(THIRD,HIGH);
       e_togglestate=1;
     }
     else 
     {
       digitalWrite(THIRD,LOW);
       e_togglestate=0;
     }
     break;

     case 33486855:

     if(f_togglestate==0)
     { 
       digitalWrite(THIRD,HIGH);
       f_togglestate=1;
     }
     else 
     {
       digitalWrite(THIRD,LOW);
       f_togglestate=0;
     }
     break;

     case 2160030094:

     if(g_togglestate==0)
     { 
       digitalWrite(FOURTH,HIGH);
       g_togglestate=1;
     }
     else 
     {
       digitalWrite(FOURTH,LOW);
       g_togglestate=0;
     }
     break;

     case 33435855:

     if(h_togglestate==0)
     { 
       digitalWrite(FOURTH,HIGH);
       h_togglestate=1;
     }
     else 
     {
       digitalWrite(FOURTH,LOW);
       h_togglestate=0;
     }
     break;
*/
     case 2160018364 :
    
        for(a=0; a<=10; a++) 
       {
        digitalWrite(FIRST,HIGH);
        delay(2000);
        digitalWrite(FIRST,LOW);
        delay(500);
        digitalWrite(FIRST,HIGH);
        delay(1000);
        digitalWrite(FIRST,LOW);
        delay(500);
        digitalWrite(FIRST,HIGH);
        delay(700);
        digitalWrite(FIRST,LOW);
        delay(200);
        digitalWrite(FIRST,HIGH);
        delay(1000);
        digitalWrite(FIRST,LOW);
       } 
      
    
     break;
/*
      case 33468495 :
     
      for(a=0; a<=10; a++) 
       {
         Serial.println(a);
        digitalWrite(SECOND,HIGH);
        delay(2000);
        digitalWrite(SECOND,LOW);
        delay(3000);
        digitalWrite(SECOND,HIGH);
        delay(1000);
        digitalWrite(SECOND,LOW);
        delay(1000);
      }
     break;   */
  }
    irrecv.resume(); 
 }

}
