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
* Adapted from: Love to Code, Volume 1: Basic Blink
*/


//----------------------
// Initialize variables
//----------------------
int LED0 = 0;   // initialize LED0 as pin 0        
int LED1 = 1;   // initialize LED1 as pin 1        
int LED2 = 2;   // initialize LED2 as pin 2        
int LED3 = 3;   // initialize LED3 as pin 3        
int LED4 = 4;   // initialize LED4 as pin 4        
int LED5 = 5;   // initialize LED5 as pin 5        
int pauseInterval = 200; //Pause interval in milliseconds (ms)

//----------------------
// Setup pins on chip
//----------------------
// set all pins as outputs
void setup() {
  outputMode(LED0);      
  outputMode(LED1); 
  outputMode(LED2); 
  outputMode(LED3); 
  outputMode(LED4); 
  outputMode(LED5); 
}

//----------------------
// L O O P
//----------------------
// NB: Everything in the loop is repeated
// Turn on the LEDs across all 6 pins in sequence. 
void loop() {

    on(LED0);
    pause(pauseInterval);
    off(LED0);
  	on(LED1);
    pause(pauseInterval);
  	off(LED1);
  	on(LED2);
    pause(pauseInterval);
    off(LED2);
  	on(LED3);
    pause(pauseInterval);
	off(LED3);
  	on(LED4);
    pause(pauseInterval);
	off(LED4);
  	on(LED5);
	pause(pauseInterval);
	off(LED5);
}

