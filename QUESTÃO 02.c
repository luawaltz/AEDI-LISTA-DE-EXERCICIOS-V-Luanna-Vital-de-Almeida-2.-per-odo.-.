#include <stdio.h>
#include <stdlib.h>

int* criarProgressaoAritmetica(int n, int valorInicial, int razao) {
    int* array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        array[i] = valorInicial + i * razao;
    }
    return array;
}

void imprimirArray(int* array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n, valorInicial, razao;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    printf("Digite o valor inicial: ");
    scanf("%d", &valorInicial);
    printf("Digite a razão da progressão aritmética: ");
    scanf("%d", &razao);

    int* array = criarProgressaoAritmetica(n, valorInicial, razao);
    imprimirArray(array, n);

    // Liberando a memória alocada
    free(array);

    return 0;
}
