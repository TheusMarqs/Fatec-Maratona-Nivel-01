#include <stdio.h>

int main()
{
    double valores[6];
    int i, positivos = 0;
    double soma = 0.0;

    // Leitura dos valores
    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &valores[i]);
        if (valores[i] > 0)
        {
            positivos++;
            soma += valores[i];
        }
    }

    // Impressão da quantidade de valores positivos
    printf("%d valores positivos\n", positivos);

    // Cálculo e impressão da média dos valores positivos
    printf("%.1lf\n", soma / positivos);

    return 0;
}