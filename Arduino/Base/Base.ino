#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define CE_PIN 53
#define CSN_PIN 48
#define switcherPin 7

const uint64_t pipeA1Write = 0xA1A1A1A1A1LL;    
const uint64_t pipeA1Read = 0xA1A1A1A1AFLL;
const uint64_t pipeA2Write = 0xA2A2A2A2A1LL;    
const uint64_t pipeA2Read = 0xA2A2A2A2AFLL;
const uint64_t pipeA3Write = 0xA3A3A3A3A1LL;    
const uint64_t pipeA3Read = 0xA3A3A3A3AFLL;
const uint64_t pipeA4Write = 0xA4A4A4A4A1LL;    
const uint64_t pipeA4Read = 0xA4A4A4A4AFLL;
const uint64_t pipeA5Write = 0xA5A5A5A5A1LL;    
const uint64_t pipeA5Read = 0xA5A5A5A5AFLL;
const uint64_t pipeA6Write = 0xA6A6A6A6A1LL;    
const uint64_t pipeA6Read = 0xA6A6A6A6AFLL;
const uint64_t pipeA7Write = 0xA7A7A7A7A1LL;    
const uint64_t pipeA7Read = 0xA7A7A7A7AFLL;
const uint64_t pipeA8Write = 0xA8A8A8A8A1LL;    
const uint64_t pipeA8Read = 0xA8A8A8A8AFLL;
const uint64_t pipeA9Write = 0xA9A9A9A9A1LL;    
const uint64_t pipeA9Read = 0xA9A9A9A9AFLL;
const uint64_t pipeB1Write = 0xB1B1B1B1B1LL;
const uint64_t pipeB1Read = 0xB1B1B1B1BFLL;

const bool SwitchOn = 1;

const int ChannelQuantity = 11;

const uint64_t ReadingPipe [ChannelQuantity] = {  0x7878787878LL,
                                                  0xA1A1A1A1AFLL, 0xA2A2A2A2AFLL,
                                                  0xA3A3A3A3AFLL, 0xA4A4A4A4AFLL,
                                                  0xA5A5A5A5AFLL, 0xA6A6A6A6AFLL,
                                                  0xA7A7A7A7AFLL, 0xA8A8A8A8AFLL,
                                                  0xA9A9A3A9AFLL, 0xB1B1B1B1BFLL };

const uint64_t WritingPipe [ChannelQuantity] = {  0x7878787878LL,
                                                  0xA1A1A1A1A1LL, 0xA2A2A2A2A1LL,
                                                  0xA3A3A3A3A1LL, 0xA4A4A4A4A1LL,
                                                  0xA5A5A5A5A1LL, 0xA6A6A6A6A1LL,
                                                  0xA7A7A7A7A1LL, 0xA8A8A8A8A1LL,
                                                  0xA9A9A3A9A1LL, 0xB1B1B1B1B1LL };
                                    
const int PipeSpeedRate [ChannelQuantity] = { 9600,
                                              9600, 9600, 9600, 9600, 9600, 
                                              9600, 9600, 9600, 9600, 9600, };
                                              
int joystick[2];                         // 2 element array holding Joystick readings 
int ChnNumb = 1;
float A2TempMoist[2];

RF24 radio(CE_PIN, CSN_PIN);             // Create a Radio



void setup()   
{
  Serial.begin(9600);
  delay(1000);
  Serial.println("BASE ON");
  radio.begin();
  radio.openReadingPipe(1,pipeA1Read);
  radio.startListening();
}


void selectReadingChannel (uint64_t channelNumber)
{
  radio.openReadingPipe(1,channelNumber);
  radio.startListening();
}


void loop()   
{
  for (ChnNumb = 0; ChnNumb < ChannelQuantity + 1; ChnNumb++)
  {
    selectReadingChannel (ReadingPipe [ChnNumb]);
    
    delay(500);  

    if ( radio.available() )
    {
        bool done = false;
        
        switch (ChnNumb) 
        {
          case 1:
          while (!done)
          {
            done = radio.read( joystick, sizeof(joystick) );
            Serial.print("X = ");
            Serial.println(joystick[0]);
            Serial.print("Y = ");      
            Serial.println(joystick[1]);
            Serial.println(' ');
          }
          break;
          
          case 2:
          while (!done)
          {
            done = radio.read(A2TempMoist, sizeof(A2TempMoist) );
            Serial.print("A2 Humidity = ");
            Serial.println(A2TempMoist[0]);
            Serial.print("A2 Temperature = ");      
            Serial.println(A2TempMoist[1]);
            Serial.println(' ');
          }
          break;
        
       }
    }
  
    else
    {    
        Serial.print("No Channel #");
        Serial.println(ChnNumb);
    }
  }

}

