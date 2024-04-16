#include <stdio.h>

int main() {
	
	// variável inteira comum.
	int num = 10;
	
	// variável ponteiro para inteiro recebendo NULL (aponta pra nada).
	int *ptr = NULL;
	
	// armazena o endereço de memória de num em ptr.
	ptr = &num;
	
	printf("O valor de num: %d\t\n", num);
	printf("O endereco de memoria de num: %p\n", &num);
	printf("O valor de ptr: %p\t\n", ptr);
	printf("O valor apontado por ptr: %d\n", *ptr);
	printf("O endereco de memoria de ptr: %p\n", &ptr);
	return 0;
}
