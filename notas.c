#include <stdio.h>
#include <locale.h>

int main(){
	float nota[3], media, soma = 0.0;
	int i;
	
	setlocale(LC_ALL, "portuguese");
	
	for(i=0;i<3;i++){
		printf("INSIRA A %d� NOTA: ", i+1);
		scanf("%f",&nota[i]);
		soma += nota[i];
		media = soma / 3;
	}
	
	system ("cls || clear");
	
	
	for(i=0;i<3;i++){
		printf("\nSUA %d� NOTA �: %.1f", i+1, nota[i]);
	}
	
	printf("\n\nSUA M�DIA �: %.1f", media);
	
	
	return 0;
}
