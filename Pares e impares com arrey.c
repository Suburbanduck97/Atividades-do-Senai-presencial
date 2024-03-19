#include <stdio.h>
#include <locale.h>
#define TAM 6

int numeros[TAM], somaPares = 0, somaImpares = 0, i;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	for(i=0;i<6;i++){
		printf("DIGITE O %dº NÚMERO: ",i+1);
		scanf("%d",&numeros[i]);
		
		
		if(numeros[i] % 2 == 0)
		somaPares++;
		else
		somaImpares++;
		
		while(!= numeros[i]){
			puts("ERROR 404!!!!!!!");
		}
	}
	
	puts("\n\n=== EXIBINDOS RESULTADOS ===");
	printf("QUANTIDADES DE NÚMEROS PARES: %d\n",somaPares);
	printf("QUANTIDADES DE NÚMEROS IMPARES: %d",somaImpares);
	
	return 0;
}
