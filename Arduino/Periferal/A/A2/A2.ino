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
#include "C:\GIT_HSH\trunk\Arduino\libraries\DHT\DHT.h"
#include "C:\GIT_HSH\trunk\Arduino\libraries\DHT\DHT.cpp"

/*-----( Declare Constants and Pin Numbers )-----*/
#define CE_PIN   9
#define CSN_PIN 10
#define DHTPIN 2     
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);

// NOTE: 
const uint64_t pipeA2Write = 0xA2A2A2A2AFLL; // Define the transmit pipe/the "LL" at the end of the constant is "LongLong" type
const uint64_t pipeA2Read = 0xA2A2A2A2A1LL;

RF24 radio(CE_PIN, CSN_PIN); // Create a Radio

float A2TempMoist[2];  // 2 element array holding Joystick readings

void setup()  
{
  Serial.begin(9600);
  delay(1000);
  radio.begin();
  radio.openWritingPipe(pipeA2Write);
  dht.begin();
  delay(1000);
}

void loop()   
{
  A2TempMoist[0] = dht.readHumidity();
  A2TempMoist[1] = dht.readTemperature();
  
  radio.write( A2TempMoist, sizeof(A2TempMoist) );

}


