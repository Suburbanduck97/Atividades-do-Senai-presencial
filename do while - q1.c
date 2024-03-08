#include <stdio.h>
#include <string.h>

int main(){
	int contador = 0;
	char continua;
	
	do{
		printf("REPETINDO...\n");
		
		contador = contador + 1;
		
		printf("TECLE 'S' SE DESEJA CONTINUAR\n");
		scanf("%c",&continua);
		fflush(stdin);
		
	}while (continua == 's');
	
	printf("O BLOCO FOI REPETIDO %d VEZES", contador);
	return 0;
}
