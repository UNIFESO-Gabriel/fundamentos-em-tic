#include <stdio.h>
#include <math.h>

typedef unsigned long long int LONG;

LONG fib_recursivo(int posicao) {

	// condição de parada
	if (posicao == 0 || posicao == 1)
		return posicao;
		
	// condição recursiva
	return fib_recursivo(posicao-1) + fib_recursivo(posicao-2);
}

LONG fib_iterativo(int posicao) {
	
	LONG atual = 1, anterior = 0;
	
	if (posicao == 0)
		return anterior;
	
	if (posicao == 1)
		return atual;
		
	LONG soma = 0;
	for (int i = 2; i <= posicao; i++) {
	
		soma = atual + anterior;
		anterior = atual;
		atual = soma;
		
		printf("Phi iteracao %d: %.10f\n", i, (double)atual/(double)anterior);
	}
	
	return soma;
}


int main() {
	
	printf("Digite a posicao da sequencia de Fibonacci: ");
	int pos; scanf("%d", &pos);
	//int termo = fib_recursivo(pos);
	LONG termo = fib_iterativo(pos);
	printf("O termo da posicao %d = %llu.\n", pos, termo);
	
	printf("Numero Phi: %.10f\n", (1 + sqrt(5)) / 2);
	return 0;
}
