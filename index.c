#include <stdio.h>

int main() {
    int N;
    int i;

    // Leitura do valor inteiro N
    scanf("%d", &N);

    // Impressão do quadrado dos valores pares de 1 até N
    for (i = 2; i <= N; i += 2) {
        printf("%d^2 = %lld\n", i, (long long)i * i);
    }

    return 0;
}