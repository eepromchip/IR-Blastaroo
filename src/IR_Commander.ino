#include <Arduino.h>
#include <IRremote.h>

IRsend irsend ;

void setup( )
{
   //if ()
irsend.sendNEC(0x20DF10EF, 32); // This command is for POWER for Vizio

irsend.sendNEC(0x61A0F00F, 32); // This command is for POWER for Insignia

}

void loop( ) {
}
