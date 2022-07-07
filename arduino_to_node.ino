// int percent = 0;int prevPercent = 0;void setup() {  Serial.begin( 9600 );void loop() {  ercent = round(analogRead(0) / 1024.00 * 100);   percent != prevPercent) {     l.println(percent);        pnt = percent;      }    0);  


/* Simple example code for Force Sensitive Resistor (FSR) with Arduino. More info: https://www.makerguides.com */

// Define FSR pin:
#define fsrpin A0

//Define variable to store sensor readings:
int fsrreading; //Variable to store FSR value

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
}

void loop() {
  // Read the FSR pin and store the output as fsrreading:
  fsrreading = analogRead(fsrpin);

  // Print the fsrreading in the serial monitor:
  // Print the string "Analog reading = ".
  Serial.print("Stress level = ");
  // Print the fsrreading:
  Serial.print(fsrreading);

  // We can set some threshholds to display how much pressure is roughly applied:
  if (fsrreading < 1) {
    Serial.println(" - No pressure applied ");
  } else if (fsrreading < 15) {
    Serial.println(" - Minimal stress ");
  } else if (fsrreading < 30) {
    Serial.println(" - Moderate stress ");
  } else if (fsrreading < 60) {
    Serial.println(" - High stress ");
  } else {
    Serial.println(" - Extreme stress ");
  }

  delay(10000); //Delay 1000 ms.
}
