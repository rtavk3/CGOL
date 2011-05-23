/*
 * ATtiny13 LED Flasher
 * File: main.c
 */
 
#include <stdlib.h>
#include <util/delay.h>
#include <avr/io.h>  
#include <util/twi.h>		/* Note [1] */
int main(void)
{
    const int msecsDelayPost = 100;
 
    // Set up Port B pin 4 mode to output
    DDRB = 1<<DDB4;
 
    // Set up Port B data to be all low
    PORTB = 0;  
 
    while (1) {
        // Toggle Port B pin 4 output state
        PORTB ^= 1<<PB4;
 
        // Pause a little while
        _delay_ms (msecsDelayPost);
    }
 
    return 0;
}
