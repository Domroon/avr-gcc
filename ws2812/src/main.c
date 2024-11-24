/*
 *
 * This example is configured for a Atmega32 at 16MHz
 */ 

#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "light_ws2812.h"

#define MAXPIX 16
#define COLORLENGTH (MAXPIX/2)
#define FADE (256/COLORLENGTH)

struct cRGB colors[8];
struct cRGB led[MAXPIX];


void clear_leds(){
    uint8_t i;
    for(i=MAXPIX; i>0; i--)
    {    
        led[i-1].r=0;led[i-1].g=0;led[i-1].b=0;
    }
}


int main(void)
{
	DDRB|=_BV(ws2812_pin);
		
    clear_leds();
    ws2812_setleds(led,MAXPIX);
		
    //Rainbowcolors
    colors[0].r=150; colors[0].g=150; colors[0].b=150;
    colors[1].r=255; colors[1].g=000; colors[1].b=000;//red
    colors[2].r=255; colors[2].g=100; colors[2].b=000;//orange
    colors[3].r=100; colors[3].g=255; colors[3].b=000;//yellow
    colors[4].r=000; colors[4].g=255; colors[4].b=000;//green
    colors[5].r=000; colors[5].g=100; colors[5].b=255;//light blue (türkis)
    colors[6].r=000; colors[6].g=000; colors[6].b=255;//blue
    colors[7].r=100; colors[7].g=000; colors[7].b=255;//violet
    colors[8].r=000; colors[8].g=000; colors[8].b=000;//off
    
	while(1)
    {
        led[0] = colors[7];
        ws2812_setleds(led,MAXPIX);
		_delay_ms(1000);
        led[0] = colors[8];
        ws2812_setleds(led,MAXPIX);
        _delay_ms(1000);
    }
}