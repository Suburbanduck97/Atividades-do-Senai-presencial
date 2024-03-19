#include <stdio.h>
#include <locale.h>
#define SIZE 4

float numeros[SIZE], somaPositivos = 0.0, quantidadeNegativos = 0.0;
int i;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	for(i=0;i<SIZE; i++){
		printf("INSIRA O %dº NÚMERO: ",i+1);
		scanf("%f",&numeros[i]);
		
		numeros[i]>=0?(somaPositivos+=numeros[i]):(quantidadeNegativos++); 
	}
	
	puts("\n=== EXIBINDO RESULTADOS ===\n");
	printf("SOMA DOS NÚMEROS POSITIVOS: %.1f",somaPositivos);
	printf("\nQUANTIDADES DE NÚMEROS NEGATIVOS: %.1f",quantidadeNegativos);
	
	return 0;
} 
