/* 
   1 - GND
   2 - VCC 3.3V !!! NOT 5V
   3 - CE to Arduino pin 9
   4 - CSN to Arduino pin 10
   5 - SCK to Arduino pin 13
   6 - MOSI to Arduino pin 11
   7 - MISO to Arduino pin 12
   8 - UNUSED
   - 
   Analog Joystick or two 10K potentiometers:
   GND to Arduino GND
   VCC to Arduino +5V
   X Pot to Arduino A0
   Y Pot to Arduino A1
  */

/*-----( Import needed libraries )-----*/
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

/*-----( Declare Constants and Pin Numbers )-----*/
#define CE_PIN   9
#define CSN_PIN 10
#define JOYSTICK_X A0
#define JOYSTICK_Y A1

// NOTE: 
const uint64_t pipe = 0xA1A1A1A1A1LL; // Define the transmit pipe/the "LL" at the end of the constant is "LongLong" type

RF24 radio(CE_PIN, CSN_PIN); // Create a Radio
int joystick[2];  // 2 element array holding Joystick readings

void setup()  
{
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(pipe);
}

void loop()   
{
  joystick[0] = analogRead(JOYSTICK_X);
  joystick[1] = analogRead(JOYSTICK_Y);
  
  radio.write( joystick, sizeof(joystick) );

}


