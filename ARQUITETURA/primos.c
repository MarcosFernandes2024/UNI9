#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0; // Se o número for menor ou igual a 1, não é primo
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Se o número for divisível por algum número além de 1 e ele mesmo, não é primo
        }
    }
    return 1; // Se o número passar pelos testes acima, é primo
}

int main() {
    printf("Numeros primos entre 0 e 10:\n");

    // Loop de 0 a 10 para verificar cada número
    for (int i = 0; i <= 10; i++) {
        if (ehPrimo(i)) {
            printf("%d\n", i); // Se o número for primo, imprime-o
        }
    }

    return 0;
}
