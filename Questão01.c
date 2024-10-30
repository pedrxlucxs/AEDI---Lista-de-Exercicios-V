#include <stdio.h>

int somaRecursiva(int n) {
    if (n == 0)
        return 0;
    return n + somaRecursiva(n - 1);
}

int main() {
    int n;

    for (n = 1; n <= 5; n++) {
        printf("A soma de 1 até %d é: %d\n", n, somaRecursiva(n));
    }

    printf("A soma de 1 até 10 é: %d\n", somaRecursiva(10));
    printf("A soma de 1 até 15 é: %d\n", somaRecursiva(15));
    printf("A soma de 1 até 20 é: %d\n", somaRecursiva(20));

    return 0;
}
