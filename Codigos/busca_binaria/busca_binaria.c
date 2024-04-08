#include <stdlib.h>
#include "busca_binaria.h"

int busca_binaria(int* lista, int inicio, int fim, int numero_procurado) {
    
    if (inicio > fim)
        return -1;
    
    int mid = (inicio + fim) / 2;
    
    if (lista[inicio] == numero_procurado)
        return inicio;
    
    if (lista[fim] == numero_procurado)
        return fim;
        
    if (lista[mid] == numero_procurado)
        return mid;
        
    if (lista[mid] < numero_procurado) 
        return busca_binaria(lista, mid+1, fim, numero_procurado);
        
    if (lista[mid] > numero_procurado) 
        return busca_binaria(lista, inicio, mid-1, numero_procurado);
}

int* preencher_array(int tamanho) {
    
    int* lista = malloc(tamanho * sizeof(int));
    int min = 1, max = 100;
    
    for (int i = 0; i < tamanho; i++) {
        lista[i] = rand() % (max - min + 1) + min;
    }
    
    return lista;
}

// Função de comparação para o qsort
int comparar(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void ordenar_array(int* lista, int tamanho) {
    qsort(lista, tamanho, sizeof(int), comparar);
}