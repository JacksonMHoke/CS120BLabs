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
    DDRB = 0x00; PORTB = 0x00;
    DDRC = 0x00; PORTC = 0x00;
    unsigned char temp1 = 0x00;
    unsigned char temp2 = 0x00;
    unsigned char fuelLevel = 0x00;
    /* Insert your solution below */
    while (1) {
        temp1=PINA&0x0F;
        temp2=PINA&0x70;
        fuelLevel=0x00;
        if (temp1>=1 && temp1<=2) fuelLevel=0x20;
        else if (temp1>=3 && temp1<=4) fuelLevel=0x30;
        else if (temp1>=5 && temp1<=6) fuelLevel=0x38;
        else if (temp1>=7 && temp1<=9) fuelLevel=0x3C;
        else if (temp1>=10 && temp1<=12) fuelLevel=0x3E;
        else if (temp1>=13 && temp1<=15) fuelLevel=0x3F;
        
        if (temp1<5) fuelLevel |= 0x40;
        if (temp2==0x30) fuelLevel |= 0x80;

        PORTC=fuelLevel;
    }
    return 1;
}
