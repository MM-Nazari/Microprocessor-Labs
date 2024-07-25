# 1 "X:\\1\\Micro_Lab01\\Micro_Lab01.ino"
void setup() {
  pinMode(0, 0x1);
  pinMode(1, 0x1);
  pinMode(2, 0x1);
  pinMode(3, 0x1);
  pinMode(4, 0x1);
  pinMode(5, 0x1);

  pinMode(8, 0x0);
  pinMode(9, 0x0);
  pinMode(10, 0x0);
}

void loop() {
   if (digitalRead(8) == 1){
    digitalWrite(0, 0x1);
    delay(1000);
    digitalWrite(1, 0x1);
    delay(1000);
    digitalWrite(2, 0x1);
    delay(1000);
    digitalWrite(3, 0x1);
    delay(1000);
    digitalWrite(4, 0x1);
    delay(1000);
    digitalWrite(5, 0x1);
    delay(1000);
  } else if (digitalRead(9)== 1){
      const int counter = strlen("Mohammad");
    for (int i =0 ; i<counter ; i++){
        digitalWrite(0, 0x1);
        digitalWrite(1, 0x1);
        digitalWrite(2, 0x1);
        digitalWrite(3, 0x1);
        digitalWrite(4, 0x1);
        digitalWrite(5, 0x1);
        delay(1000);

        digitalWrite(0, 0x0);
        digitalWrite(1, 0x0);
        digitalWrite(2, 0x0);
        digitalWrite(3, 0x0);
        digitalWrite(4, 0x0);
        digitalWrite(5, 0x0);
        delay(1000);

      }
        digitalWrite(0, 0x1);
        digitalWrite(1, 0x1);
        digitalWrite(2, 0x1);
        digitalWrite(3, 0x1);
        digitalWrite(4, 0x1);
        digitalWrite(5, 0x1);
  }else if (digitalRead(10) == 1){
    digitalWrite(0, 0x0);
    digitalWrite(1, 0x0);
    digitalWrite(2, 0x0);
    digitalWrite(3, 0x0);
    digitalWrite(4, 0x0);
    digitalWrite(5, 0x0);
  }
}
