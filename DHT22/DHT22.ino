
#include <dht.h>
dht DHT;

#define DHT22_PIN 4  

//Variables
float hum;
float temp; 

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int chk = DHT.read22(DHT22_PIN);
    hum = DHT.humidity;
    temp= DHT.temperature;
    Serial.print("Humedad: ");
    Serial.print(hum);
    Serial.print("%, Temperatura: ");
    Serial.print(temp);
    Serial.println("ºC");
    delay(2000); 
}
