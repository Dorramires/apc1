#include <stdio.h>


int main(){
	int numeros[10];
	int maior = -999999;
	int menor =  999999;

	for(int i; i<10; i++){
		printf("Entre com %io. numero: ", i+1);
		scanf("%i", &numeros[i]);

		if(numeros[i] > maior){
			maior = numeros[i];
		}

		if(numeros[i] < menor){
			menor = numeros[i];
		}
	} 

	printf("Os numeros lidos foram:\n");
	for(int i=0; i<10; i++){
		printf("%i ", numeros[i]);
	}
	printf("\n");
	printf("sendo %i o maior numero\ne %i o menor numero\n", maior, menor);



	return 0;
}
