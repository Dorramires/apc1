#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* vouf(int valor){
	if(valor == 1){
		return "verdadeiro";
	}
	else {
		return "falso";
	}
}
int main(){
	//Entrada
	int numero1, numero2;

	printf("Entre com numero: ");
	int deu_certo = scanf("%i", &numero1);
	printf("Entre com outro numero: ");
	deu_certo = scanf("%i", &numero2);

	//Processamento
	int igual = numero1 == numero2;
	int diferentes = numero1 != numero2;
	int menor = numero1 < numero2;
	int menor_igual = numero1 <= numero2;
	int maior = numero1 > numero2;
	int maior_igual = numero1 >= numero2;


	//Saida

	printf("%i é igual a %i? %s\n", numero1, numero2, vouf(igual));
	printf("%i é diferente a %i? %s\n", numero1, numero2, vouf(diferentes));
	printf("%i é menor a %i? %s\n", numero1, numero2, vouf(menor));
	printf("%i é menor igual a %i? %s\n", numero1, numero2, vouf(menor_igual));
	printf("%i é maior a %i? %s\n", numero1, numero2, vouf(maior));
	printf("%i é maior igual a %i? %s\n", numero1, numero2, vouf(maior_igual));




	return 0;
}
