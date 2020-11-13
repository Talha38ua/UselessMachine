#include <Servo.h>
#include "pitches.h"


#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 9


int switch_pin = 3; // toggle switch
int led_pin = 10; // white led
Servo myservo;  // create servo object to control a servo
int servoPosition = 10; // position of the servo motor
int sensorPin = A3;    // select the input pin LDR
int sensorValue = 0;  // variable to store the value coming from the sensor
int speakerPin = 7;

void setup() {
  pinMode(switch_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  myservo.attach(4);  // attaches the servo on pin D4 to the servo object
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}

void loop() {
  //The white led which is on at all times
  digitalWrite(led_pin, HIGH);
  sensorValue = analogRead(sensorPin);

  //If switch is on
  if (digitalRead(switch_pin) == HIGH) {
    servoPosition = 10;
    myservo.write(servoPosition);              // tell servo to go to position in variable "servoPosition"
    if (sensorValue < 800) {
      gameOfThrones();
    }
  }
  //If switch is off
  if (digitalRead(switch_pin) == LOW) {
    servoPosition = 100;
    myservo.write(servoPosition);              // tell servo to go to position in variable 'servoPosition'
  }
}

void gameOfThrones() {
  //Red
  digitalWrite(REDPIN, HIGH);
  for (int i = 0; i < 4; i++)
  {
    tone(speakerPin, NOTE_G4);
    delay(500);
    noTone(speakerPin);
    tone(speakerPin, NOTE_C4);
    delay(500);
    noTone(speakerPin);
    tone(speakerPin, NOTE_DS4);
    delay(250);
    noTone(speakerPin);
    tone(speakerPin, NOTE_F4);
    delay(250);
    noTone(speakerPin);
  }

  //Blue
  digitalWrite(REDPIN, LOW);
  digitalWrite(BLUEPIN, HIGH);
  digitalWrite(GREENPIN, LOW);
  for (int i = 0; i < 4; i++)
  {
    tone(speakerPin, NOTE_G4);
    delay(500);
    noTone(speakerPin);
    tone(speakerPin, NOTE_C4);
    delay(500);
    noTone(speakerPin);
    tone(speakerPin, NOTE_E4);
    delay(250);
    noTone(speakerPin);
    tone(speakerPin, NOTE_F4);
    delay(250);
    noTone(speakerPin);
  }
  tone(speakerPin, NOTE_G4);
  delay(500);
  noTone(speakerPin);
  tone(speakerPin, NOTE_C4);
  delay(500);
  tone(speakerPin, NOTE_DS4);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_F4);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_D4);
  delay(500);
  noTone(speakerPin);

  //Green
  digitalWrite(REDPIN, LOW);
  digitalWrite(BLUEPIN, LOW);
  digitalWrite(GREENPIN, HIGH);
  for (int i = 0; i < 3; i++)
  {
    tone(speakerPin, NOTE_G3);
    delay(500);
    noTone(speakerPin);
    tone(speakerPin, NOTE_AS3);
    delay(250);
    noTone(speakerPin);
    tone(speakerPin, NOTE_C4);
    delay(250);
    noTone(speakerPin);
    tone(speakerPin, NOTE_D4);
    delay(500);
    noTone(speakerPin);
  }//
  tone(speakerPin, NOTE_G3);
  delay(500);
  noTone(speakerPin);
  tone(speakerPin, NOTE_AS3);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_C4);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_D4);
  delay(1000);
  noTone(speakerPin);

  //Violet
  digitalWrite(REDPIN, HIGH);
  digitalWrite(BLUEPIN, HIGH);
  digitalWrite(GREENPIN, LOW);

  tone(speakerPin, NOTE_F4);
  delay(1000);
  noTone(speakerPin);
  tone(speakerPin, NOTE_AS3);
  delay(1000);
  noTone(speakerPin);
  tone(speakerPin, NOTE_DS4);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_D4);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_F4);
  delay(1000);
  noTone(speakerPin);
  tone(speakerPin, NOTE_AS3);
  delay(1000);
  noTone(speakerPin);
  tone(speakerPin, NOTE_DS4);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_D4);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_C4);
  delay(500);
  noTone(speakerPin);
  for (int i = 0; i < 3; i++)
  {
    tone(speakerPin, NOTE_GS3);
    delay(250);
    noTone(speakerPin);
    tone(speakerPin, NOTE_AS3);
    delay(250);
    noTone(speakerPin);
    tone(speakerPin, NOTE_C4);
    delay(500);
    noTone(speakerPin);
    tone(speakerPin, NOTE_F3);
    delay(500);
    noTone(speakerPin);
  }

  //Cyan
  digitalWrite(REDPIN, LOW);
  digitalWrite(BLUEPIN, HIGH);
  digitalWrite(GREENPIN, HIGH);
  tone(speakerPin, NOTE_G4);
  delay(1000);
  noTone(speakerPin);
  tone(speakerPin, NOTE_C4);
  delay(1000);
  noTone(speakerPin);
  tone(speakerPin, NOTE_DS4);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_F4);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_G4);
  delay(1000);
  noTone(speakerPin);
  tone(speakerPin, NOTE_C4);
  delay(1000);
  noTone(speakerPin);
  tone(speakerPin, NOTE_DS4);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_F4);
  delay(250);
  noTone(speakerPin);
  tone(speakerPin, NOTE_D4);
  delay(500);
  noTone(speakerPin);

  //White yellowish
  digitalWrite(REDPIN, HIGH);
  digitalWrite(BLUEPIN, LOW);
  digitalWrite(GREENPIN, HIGH);
  for (int i = 0; i < 4; i++)
  {
    tone(speakerPin, NOTE_G3);
    delay(500);
    noTone(speakerPin);
    tone(speakerPin, NOTE_AS3);
    delay(250);
    noTone(speakerPin);
    tone(speakerPin, NOTE_C4);
    delay(250);
    noTone(speakerPin);
    tone(speakerPin, NOTE_D4);
    delay(500);
    noTone(speakerPin);
  }
  //No color
  digitalWrite(REDPIN, LOW);
  digitalWrite(BLUEPIN, LOW);
  digitalWrite(GREENPIN, LOW);
}
