/*
 * systemturon.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmedmohamed
 */
#include "main.h"
void on(void)//these function when user choose to turn on vehicle
{
	char z;

		display();
		scanf(" %c", &z); //in these case i will ask user to choose from menu
		z = tolower((unsigned char)z); //change upper to lower case to ascii;


	while(z==97)//check if user enter a so it will displayed data in function choose so i call it
	{
		displayer();
		scanf(" %c",&z);
		z = tolower((unsigned char)z);
		choose(z);

	}

	if(z==98) // if user choose b
		traff(); // i call these function and give the data that user insert
	if(z==99)
		temp();
	if(z==100)
		engine_temp(z);

}
