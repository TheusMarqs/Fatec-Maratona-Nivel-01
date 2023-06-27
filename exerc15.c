#include <stdio.h>

int main()
{
    int N;
    int i;
    // Leitura do valor inteiro N
    scanf("%d", &N);

    // Impressão dos números entre 1 e 10000 com resto igual a 2 ao dividir por N
    for (i = 1; i <= 10000; i++)
    {
        if (i % N == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}