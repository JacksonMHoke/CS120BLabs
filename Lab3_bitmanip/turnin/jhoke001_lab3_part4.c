/*	Author: jhoke001
 *  Partner(s) Name: Jackson Hoke
 *	Lab Section: 022
 *	Assignment: Lab #3  Exercise #4
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0x00;
    DDRB = 0x00; PORTB = 0x00;
    DDRC = 0x00; PORTC = 0x00;
    unsigned char temp1 = 0x00;
    /* Insert your solution below */
    while (1) {
        temp1=PINA&0xFF;
        PORTB=(temp1>>4);
        PORTC=(temp1<<4);
    }
    return 1;
}
