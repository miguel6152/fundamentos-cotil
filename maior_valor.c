#include <stdio.h>
int main() {
    int vetor[10];
    int i, maior;

    // Entrada dos valores
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Encontrar o maior valor
    maior = vetor[0];
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Exibir o maior valor
    printf("O maior valor digitado foi: %d\n", maior);

    return 0;
}
