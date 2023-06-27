#include <stdio.h>

int main()
{
    double valor;
    int notas100, notas50, notas20, notas10, notas5, notas2;
    int moedas1, moedas50, moedas25, moedas10, moedas5, moedas1cent;

    // Leitura do valor monetário
    scanf("%lf", &valor);

    // Conversão para centavos
    int centavos = valor * 100;

    // Cálculo das notas de 100
    notas100 = centavos / 10000;
    centavos %= 10000;

    // Cálculo das notas de 50
    notas50 = centavos / 5000;
    centavos %= 5000;

    // Cálculo das notas de 20
    notas20 = centavos / 2000;
    centavos %= 2000;

    // Cálculo das notas de 10
    notas10 = centavos / 1000;
    centavos %= 1000;

    // Cálculo das notas de 5
    notas5 = centavos / 500;
    centavos %= 500;

    // Cálculo das notas de 2
    notas2 = centavos / 200;
    centavos %= 200;

    // Cálculo das moedas de 1
    moedas1 = centavos / 100;
    centavos %= 100;

    // Cálculo das moedas de 0.50
    moedas50 = centavos / 50;
    centavos %= 50;

    // Cálculo das moedas de 0.25
    moedas25 = centavos / 25;
    centavos %= 25;

    // Cálculo das moedas de 0.10
    moedas10 = centavos / 10;
    centavos %= 10;

    // Cálculo das moedas de 0.05
    moedas5 = centavos / 5;
    centavos %= 5;

    // Cálculo das moedas de 0.01
    moedas1cent = centavos;

    // Impressão do resultado
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas1);
    printf("%d moeda(s) de R$ 0.50\n", moedas50);
    printf("%d moeda(s) de R$ 0.25\n", moedas25);
    printf("%d moeda(s) de R$ 0.10\n", moedas10);
    printf("%d moeda(s) de R$ 0.05\n", moedas5);
    printf("%d moeda(s) de R$ 0.01\n", moedas1cent);

    return 0;
}