#include <stdio.h>

int main() {

	float valor_inicial, valor_final;
	int desconto;
	
	printf("Digite o valor inicial do produto (R$): ");
	scanf("%f", &valor_inicial);
	
	printf("Digite o valor do desconto (em %): ");
	scanf("%d", &desconto);
	
	float desc_decimal = 1 - (((float)desconto) / 100.0);
	valor_final = valor_inicial * desc_decimal;
	
	printf("O valor do produto com desconto eh R$ %.2f\n", valor_final);
	
	return 0;
}
