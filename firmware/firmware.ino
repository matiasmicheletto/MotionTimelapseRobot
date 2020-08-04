#include "BYJ48.h"

BYJ48 motor(8, 9, 10, 11, true);

void setup(){}

void loop(){
    motor.stepCW(); 	// Avance
    delay(40);
}
