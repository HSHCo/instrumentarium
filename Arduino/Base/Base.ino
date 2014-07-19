#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

/*-----( Declare Constants and Pin Numbers )-----*/
#define CE_PIN   9
#define CSN_PIN 10
#define switcherPin 7

const uint64_t pipe = 0xE8E8F0F0E1LL; // Define the transmit pipe
RF24 radio(CE_PIN, CSN_PIN); // Create a Radio
int joystick[2];  // 2 element array holding Joystick readings
bool switch_on = 1;

void setup()   
{
  pinMode(switcherPin, OUTPUT);
  digitalWrite(switcherPin, LOW);
  Serial.begin(9600);
  delay(1000);
  Serial.println("Nrf24L01 Receiver Starting");
  radio.begin();
  radio.openReadingPipe(1,pipe);
  radio.startListening();;
}


void loop()   
{
  delay(1000);
  digitalWrite(switcherPin, LOW);
  delay(1000);
  digitalWrite(switcherPin, HIGH);
        
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
      Serial.println("No radio available");
  }

}
