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

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define CE_PIN   9
#define CSN_PIN 10
#define JOYSTICK_X A0
#define JOYSTICK_Y A1

// NOTE: 
const uint64_t pipeA0Write = 0xA1A1A1A1AFLL; // Define the transmit pipe/the "LL" at the end of the constant is "LongLong" type
const uint64_t pipeA0Read = 0xA1A1A1A1A1LL;

// Create a Radio
RF24 radio(CE_PIN, CSN_PIN); 

void setup()  
{
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(pipe);
}

void setRFChannel(const uint64_t pipeNumber)  
{
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(pipeNumber);
}



void loop()   
{
  

}


