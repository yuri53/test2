#include <DHT.h>
#define DHTPIN 7

#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
    dht.begin();
    Serial.begin(115200);
    Serial.println("Start DHT");
}
void loop()
{
    delay(1000);
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

    Serial.print("Temperature : ");
    Serial.println(temperature);
    Serial.print("Humidity : ");
    Serial.println(humidity);
}