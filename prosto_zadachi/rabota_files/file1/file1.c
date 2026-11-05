#include <stdio.h>

int main(){

	FILE *file = fopen("test.txt","a");
	
	fprintf(file," new soom file, ...\n hi");
	
	fclose(file);

return 0;
}
