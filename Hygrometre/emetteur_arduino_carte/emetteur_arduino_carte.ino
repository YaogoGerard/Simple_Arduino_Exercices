
int humiditypin = A1;
int humidity;

void setup() {
  Serial.begin(9600);
  pinMode(humiditypin, INPUT);
}

void loop() {
  humidity = analogRead(humiditypin);
  Serial.write(humidity);
 
  delay(100);
}
  
