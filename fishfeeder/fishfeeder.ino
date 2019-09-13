/*
  Switch blink
  blink after time limit expires
  pressing the switch resets the timer
*/

int led_pin = 13;
int switch_pin = 6;
int val = 0;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(switch_pin, INPUT);
}

void loop()
{
  val = digitalRead(switch_pin);
  digitalWrite(led_pin, val);


  /*
  digitalWrite(led_pin,HIGH);
  delay(500);

  digitalWrite(led_pin,LOW);

  delay(500);
  */

}
