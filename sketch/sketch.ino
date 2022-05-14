#include <ESP8266WiFi.h>

bool flag;

void setup() {
  Serial.begin(115200);
  Serial.setTimeout(2000);
}

void loop() {
  if (digitalRead(4) == HIGH){
    delay(500);
  if (digitalRead(4) == HIGH){
    WiFi.mode(WIFI_STA); // Задаем режим работы WIFI_STA (клиент)
    WiFi.begin("ssid", "Pass"); // Подключаемся
    while (WiFi.status() != WL_CONNECTED){ // Ждем пока статус не станет WL_CONNECTED
      delay(500);
    }
    Serial.println("WiFi connected");delay(50);
    Serial.print("IP address: ");delay(50);
    Serial.println(WiFi.localIP());delay(50); // показывает наше IP
    delay(30000);
    Serial.println("DIsconnected");  
    WiFi.mode(WIFI_OFF);
    }
  }  
}
