#include <stdio.h>

// subrotina com parâmetros passados por valor.
void passagem_por_valor(int n1, int n2) {
	
	printf("Valores iniciais dos parametros: ");
	printf("n1: %d, n2: %d\n\n", n1, n2);
	
	n1 += 100;
	n2 += 100;
	
	printf("Valores finais dos parametros: ");
	printf("n1: %d, n2: %d\n\n", n1, n2);
}


void passagem_por_referencia(int *n1, int *n2) {
	
	printf("Valores iniciais dos parametros: ");
	printf("n1: %d, n2: %d\n\n", *n1, *n2);
	
	*n1 += 100;
	*n2 += 100;
	
	printf("Valores finais dos parametros: ");
	printf("n1: %d, n2: %d\n\n", *n1, *n2);
}


int main() {
	
	int num1 = 20, num2 = 30;
	printf("Valores iniciais dos argumentos: ");
	printf("num1: %d, num2: %d\n\n", num1, num2);
	
	passagem_por_referencia(&num1, &num2);
	
	printf("Valores finais dos argumentos: ");
	printf("num1: %d, num2: %d\n\n", num1, num2);
	
	return 0;
}
