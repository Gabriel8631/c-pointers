#include <stdio.h>

int main() {
    int numero = 42;         
    int *ponteiro = &numero; 

    printf("--- Entendendo Ponteiros ---\n\n");
    printf("1. Valor da variavel 'numero': %d\n", numero);
    printf("2. Endereco de 'numero' na memoria: %p\n", (void*)&numero);
    printf("3. Valor armazenado em 'ponteiro': %p\n", (void*)ponteiro);
    printf("4. Valor para o qual o 'ponteiro' aponta: %d\n", *ponteiro);

    return 0;
}
