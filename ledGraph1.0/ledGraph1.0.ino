int ledPins[] = { 2,3, 4, 5, 6, 7, 8, 9, 10, 11, }; 
const int ledCount = 10;

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < ledCount; i++) { 
    pinMode(ledPins[i], OUTPUT); 
  } 
}

void loop() { 
  // the ith LED of LED bar graph will light up in turn 
  for (int i = 0; i < ledCount; i++) { 
    barGraphDisplay(i); 
  } 
  for (int i = ledCount; i > 0 ; i--) { 
    barGraphDisplay(i); 
  }
} 

void barGraphDisplay(int ledOn) { 
  // make the "ledOn"th LED of bar graph LED on and the others off 
  for (int i = 0; i < ledCount; i++) { 
    if (i == ledOn) 
   digitalWrite(ledPins[i], HIGH); 
    else 
 digitalWrite(ledPins[i], LOW); 
  } 
  delay(1000); 
} 
