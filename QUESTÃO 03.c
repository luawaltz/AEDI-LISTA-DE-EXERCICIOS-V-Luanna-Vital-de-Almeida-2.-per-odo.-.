#include <stdio.h>

int buscaBinaria(int arr[], int inicio, int fim, int elemento) {
    if (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

       
        if (arr[meio] == elemento) {
            return meio;
        }

      
        if (arr[meio] > elemento) {
            return buscaBinaria(arr, inicio, meio - 1, elemento);
        }

        return buscaBinaria(arr, meio + 1, fim, elemento);
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int elemento = 10;
    int resultado = buscaBinaria(arr, 0, n - 1, elemento);

    if (resultado != -1) {
        printf("Elemento encontrado no índice %d\n", resultado);
    } else {
        printf("Elemento não encontrado no array\n");
    }

    return 0;
}
