#include <stdio.h>

int main() {
    int M, N, i, soma;

    while (1) {
        // Leitura dos valores M e N
        scanf("%d %d", &M, &N);

        // Verificação se algum dos valores é menor ou igual a zero
        if (M <= 0 || N <= 0)
            break;

        // Impressão da sequência do menor até o maior
        if (M < N) {
            for (i = M; i <= N; i++) {
                printf("%d ", i);
            }
        } else {
            for (i = N; i <= M; i++) {
                printf("%d ", i);
            }
        }

        // Cálculo da soma dos inteiros consecutivos
        soma = 0;
        if (M < N) {
            for (i = M; i <= N; i++) {
                soma += i;
            }
        } else {
            for (i = N; i <= M; i++) {
                soma += i;
            }
        }

        // Impressão da soma
        printf("Sum=%d\n", soma);
    }

    return 0;
}