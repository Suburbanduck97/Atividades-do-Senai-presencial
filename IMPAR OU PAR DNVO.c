#include <stdio.h>
#include <locale.h>
#define tam 6

int main(){
	int i, numeros[tam], somaPar = 0, somaImpar = 0;
	
	setlocale(LC_ALL, "portuguese");
	
	for(i=0;i<tam;i++){
		printf("Digite o %dº número: ",i+1);
		scanf("%d",&numeros[i]);
	
		somaPar += (numeros[i] % 2 == 0);
		somaImpar += (numeros[i] % 2 != 0);
	}
	
	//Exibindo Resultados.
	
	printf("\nQuantidade de numeros pares: %d", somaPar);
	printf("\nQuantidade de numeros impares: %d",somaImpar);
	return 0;
}
