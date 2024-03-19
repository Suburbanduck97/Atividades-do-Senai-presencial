#include <stdio.h>
#include <locale.h>
#include <limits.h>
#define  TAM 5

int idade[TAM], i;
char nome[TAM][200];

int main(){
	setlocale(LC_ALL,"portuguese");
	for(i=0;i<TAM;i++){
		fflush(stdin);
		printf("\nDIGITE A SEU NOME: ");
		scanf("%200[^\n]s",&nome[i]);
		
		fflush(stdin);
		printf("DIGITE A SUA IDADE: ");
		scanf("%d",&idade[i]);
	
	}
	
	puts("\n\n=== EXIBINDO DADOS ===\n\n");
	for(i=0;i<TAM;i++){
	printf("%dº NOME INSERIDO: %s, IDADE: %d\n",i+1,nome[i],idade[i]);
	}
	
	return 0;
}
