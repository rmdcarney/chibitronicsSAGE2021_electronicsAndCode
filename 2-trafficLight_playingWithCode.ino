/*===============
* S A G E - 2021
* ==========================
* rmdcarney for Berkeley Lab
* ==========================
* 
*  Script 2: Playing with Code
* 
* ==========================
* This script will cause 3 of the pins to execute a flash pattern
* Fill this script in with your group.
*/


//----------------------
// Initialize variables
//----------------------
// Exercise a) With the chibi-clip clipped to your design
// which pins line up with each color?
int redLED = ;   // initialize red LED as pin ?        
int amberLED = ; // initialize amber LED as pin ?        
int greenLED = ; // initialize green LED as pin ?        


//----------------------
// Setup pins on chip
//----------------------
// Exercise b) Set the amberLED and greenLED to be outputs too
void setup() {
  outputMode(redLED);    // set LED pin as output
}

//----------------------
// L O O P
//----------------------
// NB: Everything in the loop is repeated
// Exercise c) Take a look at your blink code, copy the loop section here. What needs to be changed to make the red LED blink?
// Exercise d) If we wanted to make the cycle quicker, what number(s) would we change?
// Exercise e) If we wanted to make the LEDs reach a less bright state, what would we change?
// Exercise f) What would you change if you only wanted to have the LED fade up?
// Exercise g) Adapt the code to have green and red fade at different times
void loop() {

  on(5);
  pause(1000);
  off(5);
  pause(1000);
  
}
