/*

5V = +5V
GND = GND
8 = A0
9 = A1
10 = A2
11 = A3

signal HIGH on A0 > send 1
signal HIGH on A1 > send 2
signal HIGH on A2 > send 4
signal HIGH on A3 > send 8

*/

#define A0 8
#define A1 9
#define A2 10
#define A3 11

#define SHOW_TIME 1000

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
}

void led_blink() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
}

void show_1() {
  digitalWrite(A0, HIGH);
  delay(SHOW_TIME);
  digitalWrite(A0, LOW);
}

void show_2() {
  digitalWrite(A1, HIGH);
  delay(SHOW_TIME);
  digitalWrite(A1, LOW);
}

void show_3() {
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  delay(SHOW_TIME);
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
}

void show_4() {
  digitalWrite(A2, HIGH);
  delay(SHOW_TIME);
  digitalWrite(A2, LOW);
}

void show_5() {
  digitalWrite(A0, HIGH);
  digitalWrite(A2, HIGH);
  delay(SHOW_TIME);
  digitalWrite(A0, LOW);
  digitalWrite(A2, LOW);
}

void show_6() {
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  delay(SHOW_TIME);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
}

void show_7() {
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  delay(SHOW_TIME);
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
}

void show_8() {
  digitalWrite(A3, HIGH);
  delay(SHOW_TIME);
  digitalWrite(A3, LOW);
}

void show_9() {
  digitalWrite(A0, HIGH);
  digitalWrite(A3, HIGH);
  delay(SHOW_TIME);
  digitalWrite(A0, LOW);
  digitalWrite(A3, LOW);
}

void show_0() {
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
  delay(SHOW_TIME);
}

void loop() {

  show_0();
  led_blink();
  show_1();
  led_blink();
  show_2();
  led_blink();
  show_3();
  led_blink();
  show_4();
  led_blink();
  show_5();
  led_blink();
  show_6();
  led_blink();
  show_7();
  led_blink();
  show_8();
  led_blink();
  show_9();
  led_blink();
  show_0();
  led_blink();
  delay(1000);
  show_9();
  led_blink();
  show_8();
  led_blink();
  show_7();
  led_blink();
  show_6();
  led_blink();
  show_5();
  led_blink();
  show_4();
  led_blink();
  show_3();
  led_blink();
  show_2();
  led_blink();
  show_1();
  led_blink();
  show_0();
  led_blink();
  delay(1000);
}
