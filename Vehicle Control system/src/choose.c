/*
 * 1stprinting.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmedmohamed
 */
#include "main.h"
void choose(char y) //these function used to enter our system depend on ascii code
{

	switch(y)
	{
	case(97):
	printf("Turn on the vehicle engine\n");
	printf("System is on\n");
	fflush(stdout);
	on();
	break;

	case(98):
	printf("Turn off the vehicle engine\n");
	printf("System is off\n");
	fflush(stdout);
	displayer();
	scanf(" %c",&y);
	y = tolower((unsigned char)y);
	choose(y);
	break;

	case(99):
	printf("Quit the system\n");
	printf("System is off\n");
	fflush(stdout);
	exit(0) ;
	break ;

	}
	 //i call function on its check if user choose chosen a or not



}

