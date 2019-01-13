void setup() {
    Serial.begin(9600);
}
 
void loop(){
int sensorVal = analogRead(A0);
Serial.print("Sensor Value: ");
Serial.print(sensorVal);

double voltage = (sensorVal*5.0)/1024.0;
    Serial.print(" Volts: ");
    Serial.print(voltage, 7);
   
  double pressure_pascal = ((3.0*((double)voltage-0.47))*1000000.0) - 54843.753906;
  double velocity = sqrt((2.0 * pressure_pascal) / 1000);
    Serial.print(" pressure = ");
    Serial.println(pressure_pascal, 7);
    
    delay(50);
}
