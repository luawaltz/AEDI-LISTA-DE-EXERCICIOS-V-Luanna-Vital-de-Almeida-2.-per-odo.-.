#include <stdio.h>

int somaRecursiva(int n) {
    if (n == 1) {
        return 1;
    }
    return n + somaRecursiva(n - 1);
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero > 0) {
        int resultado = somaRecursiva(numero);
        printf("A soma de 1 até %d é: %d\n", numero, resultado);
    } else {
        printf("Por favor, digite um número inteiro positivo.\n");
    }

    return 0;
}
