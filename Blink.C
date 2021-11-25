/* 
 Blink with variable 
 Turns on LED on for one second, then off for one second, repeatedly,
 but the interval increases each time by 1 more second
 Created On: Nov 2021
 Created By: Rodas Nega
*/

int blinkTime = 1000; // set variable to 1000

void setup() {
  // initialize digital pin LED_BUILTIN as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(blinkTime);                // wait for length of variable blinkTime
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);                     // wait for a second

  blinkTime = blinkTime + 1000; // add 1000 milliseconds (1 second) to variable 'blinkTime'
}
