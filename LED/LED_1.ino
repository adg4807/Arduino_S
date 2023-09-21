const int led_R = 13;
const int led_G = 8;
const int led_Y = 12;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(led_R,OUTPUT);
  pinMode(led_G,OUTPUT);
  pinMode(led_Y,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_R,1);
 delay(1000);
 digitalWrite(led_R,0);
 
 
 digitalWrite(led_G,1);
 delay(1000);
 digitalWrite(led_G,0);
 
 
 digitalWrite(led_Y,1);
 delay(1000);
 digitalWrite(led_Y,0);
 
 
 digitalWrite(led_G,1);
 delay(1000);
 digitalWrite(led_G,0);
}
