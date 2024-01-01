#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define front D1
#define back D2

char auth[] = "mrAXLhDZcy3RHivQ9pB3Jljc6-GcKVHI";
char ssid[] = "vikash";
char pass[] = "10203040@#";

BLYNK_WRITE(V0)
{
  bool value1 = param.asInt();

  if (value1 == 0)
  {
    digitalWrite(front, LOW);
  }
  else
  {
    digitalWrite(front, HIGH);
  }
}

BLYNK_WRITE(V1)
{
  bool value2 = param.asInt();
  if (value2 == 0)
  {
    digitalWrite(back, LOW);
  }
  else
  {
    digitalWrite(back, HIGH);
  }
}

void setup()
{
  Serial.begin(9600);
  pinMode(front, OUTPUT);
  pinMode(back, OUTPUT);

  digitalWrite(front, LOW);
  digitalWrite(back, LOW);

  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop()
{
  Blynk.run();
}
