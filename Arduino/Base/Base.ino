#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

/*-----( Declare Constants and Pin Numbers )-----*/
#define CE_PIN 53
#define CSN_PIN 48
#define switcherPin 7

const uint64_t pipe = 0xA1A1A1A1A1LL;    // Define the transmit pipe
RF24 radio(CE_PIN, CSN_PIN);             // Create a Radio
int joystick[2];                         // 2 element array holding Joystick readings
bool switch_on = 1;

void setup()   
{
  Serial.begin(9600);
  delay(1000);
  Serial.println("Base ON");
  radio.begin();
  radio.openReadingPipe(1,pipe);
  radio.startListening();
}


void loop()   
{
  delay(1000);        
  if ( radio.available() )
  {
    bool done = false;
    while (!done)
    {
      done = radio.read( joystick, sizeof(joystick) );
      Serial.print("X = ");
      Serial.print(joystick[0]);
      Serial.print(" Y = ");      
      Serial.println(joystick[1]);
    }
  }
  
  else
  {    
      Serial.println("No A1");
  }

}
