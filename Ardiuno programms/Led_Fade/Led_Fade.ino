int pin_3 = 3 ;
int brightness = 0;
int fadeamount = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(pin_3 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(pin_3,brightness);
brightness = brightness + fadeamount ;
if(brightness>=255 || brightness <= 0){
  fadeamount =- fadeamount ;}

delay(30);



//  // fade in from min to max in increments of 5 points:
//  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
//    // sets the value (range from 0 to 255):
//    analogWrite(ledPin, fadeValue);
//    // wait for 30 milliseconds to see the dimming effect
//    delay(30);
//  }
//
//  // fade out from max to min in increments of 5 points:
//  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
//    // sets the value (range from 0 to 255):
//    analogWrite(ledPin, fadeValue);
//    // wait for 30 milliseconds to see the dimming effect
//    delay(30);
//  }
}
