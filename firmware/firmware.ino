#include "BYJ48.h"

#define SPT 8192                                // Pasos por vuelta (half-stepping)
#define DPT 11.3                                // Distancia recorrida por vuelta (cm)
#define DX 100                                  // Distancia a recorrer (cm)
#define TD 3600                                 // Tiempo de desplazamiento (segs)

BYJ48 motor(8, 9, 10, 11, true);                // Pines de coneccion y true por modo half-steping

const int max_step = (int) DX / DPT * SPT;      // Pasos a avanzar
const int dlay = (int) 1000 * TD / max_step;    // Periodo de stepping (ms)
int step_cnt = 0;                               // Contador de pasos

void setup(){}

void loop(){
    while(step_cnt < max_step){                 // Avanzar distancia finita
        step_cnt++;
        motor.stepCW();
        delay(dlay);
    }
}
