/*
   EIT (Electronic In Touch) Projects
   www.eitkw.com
   Github Project Source Code Link:
   www.eitkw.com/GitHub
   Project Conponents Package Link:
   Project Name: Blink
   In this code we will simulate One Led flashing,
   This project needs Eitkw Educational Board Kit
   Created March 27,2023 BY EIT EDUCATION Company
*/
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
