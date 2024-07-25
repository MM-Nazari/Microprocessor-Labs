#include <Arduino.h>
#line 1 "X:\\1\\Micro_Lab01\\Micro_Lab01.ino"
#line 1 "X:\\1\\Micro_Lab01\\Micro_Lab01.ino"
void setup();
#line 14 "X:\\1\\Micro_Lab01\\Micro_Lab01.ino"
void loop();
#line 1 "X:\\1\\Micro_Lab01\\Micro_Lab01.ino"
void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
}

void loop() {
   if (digitalRead(8) == 1){
    digitalWrite(0, HIGH);
    delay(1000);
    digitalWrite(1, HIGH);
    delay(1000);    
    digitalWrite(2, HIGH);
    delay(1000);    
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(5, HIGH);
    delay(1000);
  } else if (digitalRead(9)== 1){  
      const int counter = strlen("Mohammad");
    for (int i =0 ; i<counter ; i++){
        digitalWrite(0, HIGH);   
        digitalWrite(1, HIGH); 
        digitalWrite(2, HIGH); 
        digitalWrite(3, HIGH); 
        digitalWrite(4, HIGH); 
        digitalWrite(5, HIGH); 
        delay(1000);   
                            
        digitalWrite(0, LOW); 
        digitalWrite(1, LOW);    
        digitalWrite(2, LOW);    
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        delay(1000);
                
      }
        digitalWrite(0, HIGH);   
        digitalWrite(1, HIGH); 
        digitalWrite(2, HIGH); 
        digitalWrite(3, HIGH); 
        digitalWrite(4, HIGH); 
        digitalWrite(5, HIGH); 
  }else if (digitalRead(10) == 1){
    digitalWrite(0, LOW); 
    digitalWrite(1, LOW);    
    digitalWrite(2, LOW);    
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
}
