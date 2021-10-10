/*	Author: jhoke001
 *  Partner(s) Name: Jackson Hoke
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
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
    DDRB = 0x06; PORTB = 0x00;
    DDRC = 0x00; PORTC = 0x00;
    DDRD = 0x00; PORTD = 0x00;
    unsigned char temp1 = 0x00;
    /* Insert your solution below */
    while (1) {
        temp1=PIND&0xFF;
        if (temp1>=35) PORTB = 0x02;
        else if (temp1>3 && temp1<35) PORTB = 0x04;
        else PORTB=0x00;
    }
    return 1;
}
