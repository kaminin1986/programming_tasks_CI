#include <stdio.h>
#define VAR_CONST1 12345
int main() {
  const int n=12345;
    //printf("Constant value is %d",12345); //int  
    printf("Constant value is %d\n",n); //int 
    printf("Constant value is %d\n",VAR_CONST1); //int 
    return 0;
}

