#include <stdio.h>
#define NUMBER 1000


int main()
{
	enum DAYS {MONDAY = 1, TUESDAY, ENVEROMENT, TNURSDAY,FRUDAY, SATURDAY, SUNDAY} day;
	printf("MONDAY = %d\n",MONDAY);
	printf("MONDAY = %d\n",TUESDAY);
	printf("ENVEROMENT = %d\n",ENVEROMENT);
	printf("TNURSDAY = %d\n",TNURSDAY);
	printf("FRUDAY = %d\n",FRUDAY);
	printf("SATURDAY = %d\n",SATURDAY);
	printf("SUNDAY = %d\n",SUNDAY);
	int days =MONDAY + TUESDAY + ENVEROMENT + TNURSDAY +FRUDAY + SATURDAY + SUNDAY;
	printf("summa constant = %d\n",days);
	typedef int MYTYPE;
}