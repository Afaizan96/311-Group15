/*
 * Fanmicro.c
 *
 * Created: 5/09/2017 5:49:34 p.m.
 * Author : asia633
 */ 

#include <avr/io.h>


int main(void)
{
  //set PA1 and PA2 as output (to drive the switches)
 // DDRA |= (1<<DDA1)|(1<<DDA2);
  //set PA3 as input (for hall-effect sensor)
 // DDRA &= ~(1<<DDA3);
  while(1){
	//  if (PINA & (1 << PINA3)) { //read hall sensor signal, if high
	//	  PORTA |= (1 << PORTA1 ); //turn on one of the switch
		//  PORTA &= ~(1 << PORTA2 ); //turn off the other switch
		  //} else { //if hall sensor signal is low
		  //PORTA &= ~(1 << PORTA1 ); //turn off one of the switch
		  //PORTA |= (1 << PORTA2 ); //turn on the other
	  //}
	  }
}

