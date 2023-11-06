const int pinVibM= 3;
const int pinLEDR=13;
const int pinLEDG=12;
const int pinLEDB=11;

byte count = 0;
void setup() 
{
  pinMode(pinLEDR, OUTPUT);
  pinMode(pinLEDG, OUTPUT);  
  pinMode(pinLEDB, OUTPUT);
  pinMode(pinVibM, INPUT);
  Serial.begin(9600);
  attachInterrupt(1, countVib, FALLING);
}
void loop() 
{
 if(count != 0) {
  count = 0;
  
  digitalWrite(pinLEDB,1);
  digitalWrite(pinLEDG,1);
  digitalWrite(pinLEDR,1);
  
  Serial.println(1);      
  delay(500);
 } 
 else{
  
  digitalWrite(pinLEDB,0);
  digitalWrite(pinLEDG,0);
  digitalWrite(pinLEDR,0);
  
  Serial.println(0);
  delay(500);
 }
}
 void countVib() {
 count++;
 }
