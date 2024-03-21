#include <stdio.h>
#include <locale.h>
#define SIZE 2

int i,numeros[SIZE], numerosImpares, numerosPares = 0, numerosPositivos = 0 , numerosNegativos, quantidadeDeNumerosInseridos;

int main(){
	setlocale(LC_ALL, "portuguese");
	puts("=== INSIRA UM VALOR QUALQUER ===\n");
	for(i=0;i<SIZE;i++){
		printf("DIGITE O %dº VALOR: ",i+1);
		scanf("%d",&numeros[i]);
		puts("\n");
		
		quantidadeDeNumerosInseridos++;
		
		numeros[i]>0?numerosPositivos++ : numerosNegativos++;
		numeros[i] % 2 == 0? numerosPares++ : numerosImpares++; 
	}
	
	system("cls || clear");
	puts("=== DADOS EXIBIDOS ===\n");
	
	for(i=0;i<SIZE;i++){
	printf("O %dº NÚMERO INSERIDO: %d\n",i+1,numeros[i]);
	}
	
	printf("\nQUANTIDADE DE NÚMEROS PARES: %d\n",numerosPares);
	printf("QUANTIDADE DE NÚMEROS IMPARES: %d\n",numerosImpares);
	printf("QUANTIDADE DE NÚMEROS POSITIVOS: %d\n",numerosPositivos);
	printf("QUANTIDADE DE NÚMEROS NEGATIVOS: %d\n",numerosNegativos);
	printf("QUANTIDADE DE NÚMEROS INSERIDOS: %d\n", quantidadeDeNumerosInseridos);
	
	return 0;
	}
