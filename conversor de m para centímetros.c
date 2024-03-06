#include <stdio.h>
#include <locale.h>

float converter(float nA){
	return nA * 100;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	float numeroQuaisquer = 0.0, convertendo = 0.0;
	
	printf("INSIRA UM VALOR EM (m): ");
	scanf("%f",&numeroQuaisquer);
	system("cls || clear");
	
	convertendo =  converter(numeroQuaisquer);
	
	printf("NÚMERO EM (m) INSERIDO: %.1f", numeroQuaisquer);
	printf("\nNÚMERO CONVERTIDO EM (cm): %.1f", convertendo);
	
	
}
