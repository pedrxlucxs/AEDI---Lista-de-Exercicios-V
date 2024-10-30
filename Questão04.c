#include <stdio.h>

int buscaBinaria(int arr[], int esquerda, int direita, int alvo) {
    if (esquerda > direita) {
        return -1;
    }

    int meio = (esquerda + direita) / 2;

    if (arr[meio] == alvo) {
        return meio;
    } else if (arr[meio] > alvo) {
        return buscaBinaria(arr, esquerda, meio - 1, alvo);
    } else {
        return buscaBinaria(arr, meio + 1, direita, alvo);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int alvo;

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &alvo);

    int resultado = buscaBinaria(arr, 0, tamanho - 1, alvo);

    if (resultado != -1) {
        printf("Elemento encontrado no índice: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}