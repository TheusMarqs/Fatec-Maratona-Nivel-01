#include <stdio.h>

int main() {
    int N;
    int i;

    // Leitura do valor inteiro N
    scanf("%d", &N);

    // Impressão da tabuada de N
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, N, i * N);
    }

    return 0;
}