/*
 * main.h
 *
 *  Created on: Aug 13, 2023
 *      Author: Ahmedmohamed
 */

#ifndef MAIN_H_
#define MAIN_H_
#include<stdio.h>
#include <stdbool.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

extern float enginetemp;
extern float room_temp;
extern char AC[4];
extern char engine[4] ;
extern int speed ;
extern char engineTempController[4] ;

void displayer(void);
void choose(char y) ;
void on(void) ;
void cas(void) ;
void traff(void) ;
float calcRoomTemperature(void) ;
float calcEngineTemperature(void) ;
void display(void);
void engine_temp(char x) ;
void temp(void) ;
void displayState(void) ;

#endif
