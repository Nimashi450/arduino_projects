// set pin numbers: 
int ledpin[] = {4,5,6,7}; 
const int ledcount = 4;

void setup() { 
  // initialize the LED pin as an output: 
  for(int i = 0; i<ledcount; i++){
    pinMode(ledpin[i],OUTPUT);
    }
} 



void barGraphDisplay(int ledOn) { 
  // make the "ledOn"th LED of LED bar graph on and the others off 
  for (int i = 0; i < ledcount; i++) { 
    if (i == ledOn) 
   digitalWrite(ledpin[i], HIGH); 
    else 
   digitalWrite(ledpin[i], LOW); 
  } 
  delay(1000); 
} 

void loop() { 
  for (int i = 0; i < ledcount; i++) { 
    barGraphDisplay(i);
}
}
