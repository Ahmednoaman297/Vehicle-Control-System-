/*
 * temp.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmedmohamed
 */
#include "main.h"
void temp(void)//in these function it ask user to enter the room temp
{
	int y;
	printf("enter your temp\n");
	fflush(stdout);
	scanf("%d",&y);
	if(y>10 && y<30 )
	{
		room_temp= y ;
		strcpy(AC,"OFF") ;
		displayState();
	}
	else
	{
		room_temp= 20 ;
		strcpy(AC,"ON") ;
		displayState();
	}
	on() ;

}

