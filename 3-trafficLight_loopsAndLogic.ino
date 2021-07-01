/*===============
* S A G E - 2021
* ==========================
* rmdcarney for Berkeley Lab
* ==========================
* 
*  Script 3: Loops and logic
* 
* ==========================
* This script will make 3 LEDs flash according to conditional logic and loops.
* Fill this script in with your group.
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

  int counter = 0; //New variable: counter

  /*This is a structure called a 'while' loop. 
  * Code between the two curcly brackets '{' and '}' will
  * be run so long as the condition between the parentheses '(' and ')' is true.
  * 
  * a) What is the condition for this while loop? How many times will the code be executed? 
  * b) Let's try having some lights blink and others not. We'll use if statements. Try copying the following code into the while loop:
  */
  // if( counter == 1 ){
  //     on(redLED);
  // }
  while( counter < 5 ){

      on(greenLED);
      pause(1000);
      off(redLED);
      off(amberLED);
      off(greenLED);
      pause(1000);
      
      counter = counter + 1;

  }

  pause(2000); //Pause 2 seconds after exiting while-loop
  
}
