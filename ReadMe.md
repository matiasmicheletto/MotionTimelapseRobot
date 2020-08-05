# MTR - Motion Timelapse Robot

Deslizador para cámara de bajo presupuesto - Low Cost Camera Slider

![Prototipo](img/prototype.jpg)  

## Etapas
  
 [x] Fase 1: Avance a velocidad constante indefinidamente.  
 [x] Fase 2: Avance a velocidad constante la distancia indicada.  
 [ ] Fase 3: Avance con velocidad variable según función de aceleración (cero, constante, triangular).  
 [ ] Fase 4: Segundo motor para controlar ángulo.  
 [ ] Fase 5: Seguimiento de objetivo.  
 [ ] Fase 6: Control por bluetooth.  


## Fase 1

#### Parámetros constantes  
  - Pasos por vuelta del eje.  
  - Distancia de avance por revolución del eje.  

#### Inputs:  
  - Duración de la grabación en minutos.  
  - Distancia a recorrer en cm.  

#### Output:  
  - Frecuencia o periodo de stepping.  
