#include <stdio.h>
#include <locale.h>

int main(){
	int vetor[5], i;
	
	printf("Digite os elementos do vetor: \n");
	
	for(i = 0; i<5 ; i++){
		printf("Elemento %d; ",i ++);
		scanf("%d",&vetor[i]);
	}
	
	//Exibindo dados em um vetor um laço de repetição.
	for(i = 0; i<5; i++){
		printf("Elemento %d: %d\n", i++, vetor[i]);
	}
}
