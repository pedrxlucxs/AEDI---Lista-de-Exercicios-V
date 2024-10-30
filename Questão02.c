#include <stdio.h>
#include <stdlib.h>

void gerarPA(int quantidade, int valor_inicial, int razao, int* pa) {
    for (int i = 0; i < quantidade; i++) {
        pa[i] = valor_inicial + i * razao;
    }
}

void imprimirArray(int* array, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int quantidade, valor_inicial, razao;

    printf("Digite a quantidade de elementos da PA: ");
    scanf("%d", &quantidade);
    printf("Digite o valor inicial: ");
    scanf("%d", &valor_inicial);
    printf("Digite a razão: ");
    scanf("%d", &razao);

    int* pa = (int*)malloc(quantidade * sizeof(int));

    gerarPA(quantidade, valor_inicial, razao, pa);

    printf("Progressão Aritmética: ");
    imprimirArray(pa, quantidade);

    free(pa);

    return 0;
}
