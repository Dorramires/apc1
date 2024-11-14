#include <stdio.h>
#include <string.h>



int main(){

	char string[11];
	char tecla;



	memset(string, '\0', sizeof(string));
	scanf('%s', tecla);

	memset(string, tecla, 10);
	printf("%s\n", string);
	
	memset(string, '*', 5);



	return 0;
}
