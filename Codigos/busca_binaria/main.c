#include <stdio.h>
#include <time.h>
#include "busca_binaria.h"

int main() {
    
    int tamanho = 100;
	int numero_procurado;
    
    // gera uma semente aleatória a cada execução.
    srand(time(NULL));
    
    // preenche o array com números aleatórios
    int* lista_numeros = preencher_array(tamanho); 
    
    // ordena os números em ordem crescente.
    ordenar_array(lista_numeros, tamanho);
    
	printf("Digite o numero que deseja procurar: ");    
	scanf("%d", &numero_procurado);
	
    // exibe o array
    for (int i = 0; i < 100; i++) {
        printf("%d ", lista_numeros[i]);
    }
	
    int res = busca_binaria(lista_numeros, 0, tamanho-1, numero_procurado);
    
	if (res >= 0)
		printf("\nIndice de %d: %d", numero_procurado, res);
	else 
		printf("\nNumero %d inexistente.", numero_procurado);
    
    free(lista_numeros);
    return 0;
}