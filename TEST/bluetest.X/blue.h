/* 
 * File:   blue.h
 * Author: redxef
 *
 * Created on 27 November 2015, 18:58
 */

#ifndef BLUE_H
#define	BLUE_H

#ifdef	__cplusplus
extern "C" {
#endif

    // pragmas
    #pragma config FOSC = INTOSC    // Oscillator Selection (INTOSC oscillator: I/O function on CLKIN pin)
    #pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
    #pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
    #pragma config MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
    #pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
    #pragma config CPD = OFF        // Data Memory Code Protection (Data memory code protection is disabled)
    #pragma config BOREN = OFF      // Brown-out Reset Enable (Brown-out Reset disabled)
    #pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
    #pragma config IESO = OFF       // Internal/External Switchover (Internal/External Switchover mode is disabled)
    #pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is disabled)

    // CONFIG2
    #pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
    #pragma config PLLEN = OFF      // PLL Enable (4x PLL disabled)
    #pragma config STVREN = OFF     // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will not cause a Reset)
    #pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
    #pragma config LVP = OFF        // Low-Voltage Programming Enable (High-voltage on MCLR/VPP must be used for programming)

    
    //print specific defines
    #define _XTAL_FREQ 4000000 //frequenzy
    #define RX RB1
    #define TX RB2

    void init();
    void main();

#ifdef	__cplusplus
}
#endif

#endif	/* BLUE_H */

