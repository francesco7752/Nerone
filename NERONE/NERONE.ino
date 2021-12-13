
#include <Servo.h> 
Servo servo_3;   // SERVO OCCHI
Servo servo_5;   // SERVO BOCCA   
int pos = 0;
 
void setup(){ 
servo_3.attach(3);
servo_5.attach(5);
pinMode(7, OUTPUT);  // GIRA LA TESTA
pinMode(8, OUTPUT);  // GIRA LA TESTA
pinMode(10, OUTPUT); // BRACCIO
pinMode(12, OUTPUT); // BRACCIO
}
void loop(){
//- - - - - - - - - - OCCHI - - - - - - - - - - -

  for(pos = 60; pos >=0; pos-= 1){                           
  servo_3.write(pos);                   
  delay(20);}
  for(pos = 0; pos < 60; pos+= 1){ 
  servo_3.write(pos);                   
  delay(20);}
 
//- - - - - - - - - - BOCCA - - - - - - - - - - -

  for(pos = 20; pos < 80; pos+= 1){  
  servo_5.write(pos);                    
  delay(5);}
  for(pos = 80; pos>=20; pos-=1){                               
  servo_5.write(pos);                   
  delay(5);}
   
  //- - - - - - - - - - GIRA LA TESTA - -
  delay(2000);
  digitalWrite(7, HIGH);          // IL MOTORE GIRA A DESTRA
  delayMicroseconds(5);          //(12.500Khz)VARIA LA LUNGHEZZA DEI +5V PIU è BASSO E  PIU SI ACCORCIA
  delay(2000);
  digitalWrite(7, LOW);
  delay(2000);
  digitalWrite(8, HIGH);          // IL MOTORE GIRA A SINISTRA
  delayMicroseconds(5);           
  delay(2000);
  digitalWrite(8, LOW);
  delay(2000); 
  
  digitalWrite(8, HIGH);          // IL MOTORE GIRA A SINISTRA
  delayMicroseconds(5);           //(12.500Khz)VARIA LA LUNGHEZZA
  delay(2000);
  digitalWrite(8, LOW);
  delay(2000);
  digitalWrite(7, HIGH);          //IL MOTORE GIRA A DESTRA
  delayMicroseconds(5);            
  delay(2000);
  digitalWrite(7, LOW); 
  delay(2000);
  //- - - - - - - - - - BRACCIO IN ALTO - -
  
  digitalWrite(10, HIGH);          //BRACCIO A DESTRA
  delayMicroseconds(20);          
  delay(8000);
  digitalWrite(10, LOW);
  delay(2000);
  digitalWrite(12, HIGH);          //BRACCIO A SINISTRA
  delayMicroseconds(20);            
  delay(8000);
  digitalWrite(12, LOW);
  delay(5000); 
  }                            
