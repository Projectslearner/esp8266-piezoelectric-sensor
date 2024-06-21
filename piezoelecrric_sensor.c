/*
    Project name : ESP8266 Piezoelectric Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-piezoelectric-sensor
*/

const int piezoSensorPin = A0; // Analog pin connected to the piezoelectric sensor

void setup() 
{
  Serial.begin(9600); // Initialize serial communication
}

void loop() 
{
  // Read the analog value from the piezoelectric sensor
  int sensorValue = analogRead(piezoSensorPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Piezoelectric Sensor Value: ");
  Serial.println(sensorValue);

  // Add a small delay to avoid spamming the Serial Monitor
  delay(1000);
}
