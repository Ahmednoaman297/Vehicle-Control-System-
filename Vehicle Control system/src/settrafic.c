/*
 * settrafic.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmedmohamed
 */
#include "main.h"
void traff(void)//function to know the light of traffic user should choose g or o or r
{


	char y;
	printf("enter your traffic light\n");
	fflush(stdout);
	scanf(" %c",&y); //to know the choosen of the user
	y = tolower((unsigned char)y);
	switch(y)
	{
	case(103)://if char g
		speed= 100 ;
		displayState() ;
		break;

	case(111): //if char o
		speed= 30 ;
		calcRoomTemperature();
		calcEngineTemperature();
		displayState() ;
		break;

	case(114): //if char r
		speed=0 ;
		displayState() ;
		break;
	}
	on() ;

}

