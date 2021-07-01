/*===============
* S A G E - 2021
* ==========================
* rmdcarney for Berkeley Lab
* ==========================
* 
*  Script 4: Traffic light
* 
* ==========================
* In this script you will use your pseudo code and state machine to build a traffic light that cycles between the 3 states.
* You can copy any code snippets used in the previous scripts. 
* Fill this script in on Day 2.
*/


//----------------------
// Initialize variables
//----------------------
int redLED = 0;   // initialize red LED as pin 0        
int amberLED = 2; // initialize amber LED as pin 2        
int greenLED = 4; // initialize green LED as pin 4        


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
      pause(1000);
      off(redLED);
      off(amberLED);
      off(greenLED);
      pause(1000);
}
