#include"main.h"

void displayState(void)
{
	printf("engine is %s\n", engine);
	printf("AC is %s\n", AC);
	printf("speed of vehicle %d km/hr\n",speed);
	printf("Room Temperature %f C\n", room_temp);
	printf("Engine Temperature Controller is %s\n", engineTempController);
	printf("Engine Temperature is %f C\n\n", enginetemp);
	fflush(stdout);
}
