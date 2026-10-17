# Baby Roboting
Recreacion de la mascota del capitulo de robotica UC (Roboting) version miniatura. 
Sirve de mascota de escritorio o de decoracion :D

## Piezas utilizadas
* Filamento 3D (Esun PLA+) Amarillo y Transparente
* ESP32 C3-SuperMini
* Pantalla OLED SD1306 128x64 de 1.3"
* Buzzer Pasivo
* 2 leds de 5mm (rojo y azul)
* 2 resistencias de 200 ohm
* Cables dupont hembra-hembra pequeños

## Ensamblaje
Se debe imprmir 1 de cada pieza contenida en la carpeta **Piezas 3D**, luego de eso se debe soldar a la PCB un par de headers hembra y los componentes donde correspondan.

Para ensamblar: 
Primero, se debe pegar con cinta doble cara la PCB al chasis, 
despues se debe atornillar la pantalla OLED con el respectivo holder y 
luego se debe pegar con silicona caliente los leds y holders transparentes al chasis de manera que sobresalgan por el lateral.

Por ultimo se debe cerrar el chasis y atornillar donde corresponda con tornillos M2 de 4mm

## Pines
| Componente    | Pin           |
| ------------- |:-------------:| 
| LED roja      | 4 | 
| LED azul     | 5  | 
| Buzzer     | 7  | 

## Codigo
El codigo viene listo en formato de proyecto de platformIO en la carpeta **Codigo (PlatformIO)**, en cuanto a cosas configurables
estan los **DELAYS** de los comportamientos random de los leds y las caras. 
Tiene tambien agregada una libreria propia para manejar de mejor manera componentes externos (_objects.h_)
