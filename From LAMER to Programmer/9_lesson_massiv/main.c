/*
	Author: Kaminin Aleksandr
	Date: 2026.10.18
*/


#include <stdio.h>

int main()
{
    char arr[7] ={'S','t','r','i','n','g','\0'};
    char string[] ={"Stroka"};
    int number[3];
    number[0] =10;
    number[1]=60;
    number[2] =100;
    for(int i=0; i<7; i++)
{
    printf("%c",string[i]);
}
printf("\n");
for(int i=0;i<7;i++)
{printf("%c",arr[i]);
}
printf("\n");

printf("1-element %d\n",number[0]);
printf("2-element %d\n",number[1]);
printf("3-element %d\n",number[2]);




    return 0;
}



