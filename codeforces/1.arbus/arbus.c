
#include <stdio.h>
int main(int argc, char *argv[])
{int x;	
	if(scanf("%d",&x)!=1)return 0;
	
	if (x>2&&x%2==0){
		printf("YES");}
	else{
		printf("NO");}
    return 0;
}
