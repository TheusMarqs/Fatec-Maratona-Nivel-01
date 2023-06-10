#include <stdio.h>

int main() {
    int N;
    int i;

    // Leitura do valor inteiro N
    scanf("%d", &N);

    // Loop para cada caso de teste
    for (i = 0; i < N; i++) {
        double valor1, valor2, valor3;
        double mediaPonderada;

        // Leitura dos valores reais
        scanf("%lf %lf %lf", &valor1, &valor2, &valor3);

        // Cálculo da média ponderada
        mediaPonderada = (valor1 * 2 + valor2 * 3 + valor3 * 5) / 10;

        // Impressão da média ponderada
        printf("%.1lf\n", mediaPonderada);
    }

    return 0;
}