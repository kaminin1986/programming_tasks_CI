/*
	Author: Kaminin Aleksandr
	Date: 2026.10.18
*/


#include <stdio.h>

int main()
{
    int f=0;
    int massiv[3][4];
    for (int i=0;i<3;i++)
{
    
    for(int l=0;l<4;l++)
    {
        massiv[i][l]=f;
        f=f+1;
    }
    f=f+1;
    printf ("%d \t",f);
}
    
for (int i=0;i<3;i++)
{
    for(int l=0;l<4;l++)
    {
     printf("%d ",massiv[i][l]);
    }
    
}



    return 0;
}