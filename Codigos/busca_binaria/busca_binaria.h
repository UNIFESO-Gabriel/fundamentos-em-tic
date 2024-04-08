#ifndef BUSCA_BINARIA_H
#define BUSCA_BINARIA_H

// Include any necessary standard library headers or other headers here
// Declare any global constants, macros, or type definitions

int* preencher_array(int tamanho);
int comparar(const void* a, const void* b);
void ordenar_array(int* lista, int tamanho);
int busca_binaria(int* lista, int inicio, int fim, int numero_procurado);

#endif /* BUSCA_BINARIA_H */