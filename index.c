#include <stdio.h>

int main() {
    int X, Y;
    int i;
    int soma = 0;

    // Leitura dos valores inteiros X e Y
    scanf("%d %d", &X, &Y);

    // Verifica se X é maior que Y e inverte os valores se necessário
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    // Soma dos números ímpares entre X e Y
    for (i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    // Impressão da soma dos números ímpares
    printf("%d\n", soma);

    return 0;
}