/*===============
* S A G E - 2021
* ==========================
* rmdcarney for Berkeley Lab
* ==========================
* 
*  Script 1: Basic flash
* 
* ==========================
* Upload custom script check.
* This script will cause LED 0 to blink 2x faster than it does using 
* the Basics-->Blink script. 
*/

//Declare integer variable called lightLevel, set its starting value to 0
int lightLevel = 0;
  
//-----------
// S E T U P
//-----------
void setup() {
  outputMode(0);  // pin 0 set to output
}

//----------
// L O O P
//----------
// NB: Everything in the loop is repeated
//
//Exercise a) Try changing the interval number. Does it make the LED blink faster or slower? Does that make sense?
void loop(){

 //Declare positive integer variable 'interval', set its value to 500
 unsigned interval = 500; 
  
  off(0);   // turn OFF pin 0
  delay(interval); //Wait for 'interval' number of milliseconds    
  on(0);    //turn ON pin 0 
   delay(interval);  

}  
