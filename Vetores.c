#include <stdio.h>
#include <locale.h>

int main() { 
	int numeros[5], i = 0;
	
	numeros[0] = 1;
	numeros[1] = 2;
	numeros[2] = 3;
	numeros[3] = 4;
	numeros[4] = 5;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("EXIBINDO POSI플O %d, numero: %d\n", i++, numeros[0]);
	printf("EXIBINDO POSI플O %d, numero: %d\n", i++, numeros[1]);
	printf("EXIBINDO POSI플O %d, numero: %d\n", i++, numeros[2]);
	printf("EXIBINDO POSI플O %d, numero: %d\n", i++, numeros[3]);
	printf("EXIBINDO POSI플O %d, numero: %d\n", i++, numeros[4]);
	
	return 0;
	
}
