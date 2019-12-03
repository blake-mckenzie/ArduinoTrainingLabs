/*Programmer: Mr. Lange
 * Date: 1.6.19
 * Program:Blink
 * 
 * 
 * This program will turn on an LED for specified amuounts of time, 
 * turn it off, and back on in a While Loop.
 * 
 * 
 * /*
 *DigitalReadSerial
 *Reads a digital input on pin 2, prints the rtesults to the serial monitor
 *
 *This example code is inb the public domain
 */


// initialized our led to Pin 13
int led = 13;
int pushButton = 3;


void setup() {
  // Using the Function pinMode to call the variable and provide Output:
  pinMode (led, OUTPUT);
  
  //initialize seria; communication at 9600 bits per second:
  Serial.begin(9600);
  //make the pushbutton's pin an input:
  pinMode (pushButton, INPUT);

  
}

void loop() {
  //read the input pin:
  int buttonState = digitalRead(pushButton);
  //print out the state of the button:
  Serial.println(buttonState);
  if (buttonState ==HIGH){
  delay (1000);
  digitalWrite(led, LOW);
  delay(1000);
  }
  delay (1);      //delay in between reads for stability
}
