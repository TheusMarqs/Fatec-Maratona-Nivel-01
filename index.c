#include <stdio.h>

int main() {
    int X;
    int i;

    // Leitura do valor inteiro X
    scanf("%d", &X);

    // Impressão dos números ímpares de 1 até X
    for (i = 1; i <= X; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}