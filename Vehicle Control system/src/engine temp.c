/*
 * engine temp.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmedmohamed
 */
#include "main.h"
void engine_temp(char x)//check engine temp
{
	int y;
	printf("enter your engine temp\n");
	fflush(stdout);
	scanf(" %d",&y);

	if(y>100 && y<150 )
	{
		strcpy(engineTempController, "OFF") ;
		enginetemp= y ;
		displayState();
	}
	else
	{
		enginetemp= 120;
		strcpy(engineTempController, "OFF") ;
		displayState();

	}
	on() ;
}




