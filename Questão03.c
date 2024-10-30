#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));

    return 0;
}
