/*===============
* S A G E - 2021
* ==========================
* rmdcarney for Berkeley Lab
* ==========================
* 
*  Script 0: Check connections
* 
* ==========================
* This script will be used to test that your circuit is working correctly.
*/


//----------------------
// Initialize variables
//----------------------
int redLED = 1;   // initialize red LED as pin 1        
int amberLED = 3; // initialize amber LED as pin 3        
int greenLED = 5; // initialize green LED as pin 5        


//----------------------
// Setup pins on chip
//----------------------
void setup() {
  outputMode(redLED);      // set red LED pin as output
  outputMode(amberLED);    // set amber LED pin as output
  outputMode(greenLED);    // set green LED pin as output
}

//----------------------
// L O O P
//----------------------
// NB: Everything in the loop is repeated
void loop() {

    on(redLED);
    on(amberLED);
    on(greenLED);
}
