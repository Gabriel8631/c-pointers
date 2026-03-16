#include <stdio.h>

int main() {
    int vetor[3] = {10, 20, 30};
    int *ptr = vetor; // O nome do vetor já é um ponteiro para o primeiro elemento

    printf("Primeiro elemento usando o vetor: %d\n", vetor[0]);
    printf("Primeiro elemento usando o ponteiro: %d\n", *ptr);
    
    printf("\nSegundo elemento usando o vetor: %d\n", vetor[1]);
    printf("Segundo elemento usando aritmetica de ponteiros: %d\n", *(ptr + 1)); 

    return 0;
}
