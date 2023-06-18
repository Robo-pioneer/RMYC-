#include <Servo.h>
#include <Arduino.h>
char comchar;
Servo servo_3;
Servo servo_4;
Servo servo_5;
Servo servo_6;
Servo servo_7;
Servo servo_8;

void _loop(){
}
void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}
void setup() {
  Serial.begin(9600);
  servo_3.attach(3);
  servo_4.attach(4);
  servo_5.attach(5);
  servo_6.attach(6);
  servo_7.attach(7);
  servo_8.attach(8);
  servo_3.write(75);
  servo_4.write(70);
  servo_5.write(180);
  servo_6.write(0);
  servo_7.write(5);
  servo_8.write(80);
  //while(Serial.read()>= 0){}//clear serialbuffer
}
 
void loop() {
  // read data from serial port
  while(Serial.available()>0){
    comchar = Serial.read();
    Serial.print("Serial.peek: ");
    Serial.println(comchar);
    if(comchar=='1'){
      servo_3.write(75);
      servo_4.write(70);
      servo_5.write(180);
      servo_6.write(0);
      servo_7.write(5);
      _delay(1.5);
      servo_3.write(70);
      servo_4.write(110);
      servo_5.write(140);
      servo_6.write(0);
      servo_7.write(5);
      _delay(1.5);
      servo_7.write(50);
      _delay(1);
      servo_3.write(90);
      servo_4.write(70);
      _delay(0.9);
      servo_5.write(0);
      _delay(0.2);
      servo_3.write(80);
      servo_4.write(110);
      servo_6.write(90);
      _delay(1);
      servo_7.write(5);
      }
    if(comchar=='2'){
        servo_8.write(80);
        servo_4.write(100);
        servo_5.write(90);
        servo_6.write(90);
        servo_7.write(5);
        _delay(1);
        servo_8.write(150);
        _delay(5);
        servo_8.write(80);
      }
    if(comchar=='3'){
      servo_3.write(10);
      servo_4.write(180);
      servo_5.write(20);
      servo_6.write(90);
      servo_7.write(0);
      _delay(1.5);
      servo_7.write(50);
      _delay(1);
      servo_3.write(80);
      servo_4.write(110);
      servo_5.write(0);
      _delay(1.5);
      servo_7.write(0);
      }
    if(comchar=='4'){
      
      
      }
    
    Serial.println(comchar);
    delay(100); 
    }
}
 
