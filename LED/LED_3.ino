const int led_Y=11;
const int led_R=10;
const int led_G=9;

int led_f=11;
int temp=0;

unsigned long l3,l4;
unsigned long  intervl2=40;
int fDir=0;
int fade=0;

void setup() {
  // put your setup code here, to run once:
  l3=0;
}

void loop() {
  // put your main code here, to run repeatedly:


  l4=millis();
  
  if(l4-l3>=intervl2){
    l3=l4;
    
    if(!fDir){
      fade+=5;
      if(fade>=255){
        fade=255;fDir=1;}
      }else{
      fade-=5;
      
      if(fade<=0){
        fade=0;fDir=0;
        analogWrite(led_f,fade); 
      
      if(!temp){
        led_f++;
        }
      else{
      led_f--;
      }
     }
    }
    if(led_f>=11){
      temp=1;
   }
   if(led_f<=9){
      temp=0;
   }
   analogWrite(led_f,fade);
   }
 
}
