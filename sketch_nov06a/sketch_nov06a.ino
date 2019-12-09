/*Programmer: Blake McKenzie
   Date: 12.3.9
  
   Program:Potentiometer
  

   AnalogReadSerial
   Reads an analog input on pin A0, prints to the serial monitor

  Update: 12.10.19
  ADD SERIAL READ TO BE ABLE TO READ VOLTAGES FROM 0 TO 5 VOLTS

*/



void setup() {
//initialize the serial communication at 9600 bits per second
Serial.begin(9600);

}

  
  void loop() {
  //read the input on analog pin 0
  int potentiometerValue = analogRead(A0);
  


//convert the analog read from 0 - 1023 to 0 - 5 volts
float voltage = potentiometerValue * (5.0 / 1023.0);




//print the value of our potentiometer
Serial.println(voltage);

//add delay for stability 
delay(1);

}
