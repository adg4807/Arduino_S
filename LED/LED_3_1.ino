 const int led_B = 13;
 const int led_G = 12;
 const int led_Y = 8;

unsigned long l1, l2, l3, l4, l5, l6;

unsigned long interval1 = 2000;
unsigned long interval2 = 4000;
unsigned long interval3 = 6000;

int fON = 0;
int fON1 = 0;
int fON2 = 0;

void setup()
{
  pinMode(led_B, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_Y, OUTPUT);
}

void loop()
{
  l2 = millis();
  if(l2-l1>=interval1){
    l1=l2;
    
    if(!fON)
      fON=1;
    else
      fON=0;
    
    digitalWrite(led_B, fON);
  
  }
  
  l4 = millis();
  if(l4-l3>=interval2){
    l3=l4;
    
    if(!fON1)
      fON1=1;
    else
      fON1=0;
    
    digitalWrite(led_G, fON1);
  
  }
  
  l6 = millis();
  if(l6-l5>=interval3){
    l5=l6;
    
    if(!fON2)
      fON2=1;
    else
      fON2=0;
    
    digitalWrite(led_Y, fON2);
  
  }
  
}
