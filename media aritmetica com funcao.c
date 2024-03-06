#include <stdio.h>
#include <locale.h>
#include <string.h>

float medias(float mA, float mB){
	return (mA + mB) / 2; 
}

char* resultado(float media){
	
	char resultadoMedia[200];
	if(media >= 7){
		strcpy(resultadoMedia, "APROVADO");
	}else {
		strcpy(resultadoMedia, "REPROVADO");
	}
	return resultadoMedia;
	 
}

int main(){
	float notaA = 0.0, notaB = 0.0, mediaArt = 0.0;
	char resultadoFinal[200];
	
	setlocale(LC_ALL, "");
	printf("INSIRA SUA NOTA DA AVALIAÇÃO 1: ");
	scanf("%f",&notaA);
	
	printf("INSIRA SUA NOTA DA AVALIAÇÃO 2: ");
	scanf("%f",&notaB);
	
	mediaArt = medias(notaA, notaB);
	
	printf("\nSUA NOTA 1: %.1f", notaA);
	printf("\nSUA NOTA 2: %.1f", notaB);
	printf("\nSUA MÉDIA ARITMÉTICA É: %.1f", mediaArt);
	
	printf("\nRESULTADO UNIDADE: %s", resultado(mediaArt));
	 
}
