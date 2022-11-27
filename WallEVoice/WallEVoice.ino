#include <PCM.h> // PCM Library
#include "Voices.h"
//Audio Output Pin = D11 ( & GND)

void setup()
{
startPlayback(wall_e, sizeof(wall_e));
}

void loop()
{
}