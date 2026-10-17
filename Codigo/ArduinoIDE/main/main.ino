#include <DHT.h>

//Crear objeto
int pin_sensor = 5;
DHT sensor(pin_sensor, DHT11);

void setup(){
  Serial.begin(9600);
  sensor.begin();
}

void loop(){
  //Actualizar datos sensor
  float temperatura = sensor.readTemperature();
  float humedad = sensor.readHumidity();

  //Imprimir
  Serial.println("Temperatura: " + String(temperatura) + " °C");
  Serial.println("Humedad: " + String(humedad) + "%");
  Serial.println("---------------"); //separador
  delay(250);
}


