#include <Servo.h>

Servo beltServo;  // create servo object to control a servo 
             
int pos = 0;    // variable to store the servo position 

void setup() { 
 beltServo.attach(9);  // attaches the servo on pin 9 to the servo object
} 

void loop() { 
beltServo.write(180);
delay(3000);
beltServo.write(-180);
delay(3000);
}
