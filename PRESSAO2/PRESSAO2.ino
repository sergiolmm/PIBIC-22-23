#include <HX711.h>
const int LOADCELL_DOUT_PIN = 2;
const int LOADCELL_SCK_PIN = 3;

HX711 scale;


void setup() {
  Serial.begin(115200);
  delay(10);
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);  
    
}  
void loop() { 
      
Serial.println(scale.read());  
Serial.println(scale.read()/10000);

float pressure = (scale.read());
//pressure = pressure - 2450000;     // add offset
//pressure = pressure * (-0.000018); // add scale factor
//Serial.println(pressure);
delay(500); 
}
