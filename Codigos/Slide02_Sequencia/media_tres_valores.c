#include <stdio.h>
#include <math.h>

int main() {
	
	const int tamanho = 3;
	int soma = 0;
	int numero;
	
	for (int i = 0; i < tamanho; i++) {
		printf("Digite a nota %d: ", i + 1);
		scanf("%d", &numero);
		soma += numero; //soma = soma + numero;
	}
	
	float media = soma / tamanho;
	printf("Media eh %.2f\n", media);
	
	return 0;	
}
