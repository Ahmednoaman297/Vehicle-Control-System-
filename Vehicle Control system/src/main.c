/*
 * main.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmedmohamed
 */


#include "main.h"

float enginetemp=120;
float room_temp=20;
char AC[4]="OFF";
char engine[4]= "OFF" ;
int speed= 0 ;
char engineTempController[4]="OFF" ;

int main(void)
{
	displayer();

	char ch;
	scanf(" %c", &ch); // Added & before ch to get the address of ch
	ch = tolower((unsigned char)ch); // Use tolower()if user enter cap and  unsigned char to change to Ascii
	choose(ch);

	return 0;
}



