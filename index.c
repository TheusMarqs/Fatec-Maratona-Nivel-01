#include <stdio.h>

int main() {
    int valores[5];
    int i, pares = 0;

    // Leitura dos valores
    for (i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
        if (valores[i] % 2 == 0) {
            pares++;
        }
    }

    // Impressão da quantidade de valores pares
    printf("%d valores pares\n", pares);

    return 0;
}