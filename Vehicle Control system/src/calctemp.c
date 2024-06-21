/*
 * ac.c
 *
 *  Created on: Aug 14, 2023
 *      Author: Ahmedmohamed
 */
#include "main.h"
float calcRoomTemperature(void)
{
	room_temp= room_temp*5/4 +1 ;
	return room_temp ;
}

float calcEngineTemperature(void)
{
	enginetemp= enginetemp*5/4 +1 ;
	return enginetemp ;
}

