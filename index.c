#include <stdio.h>

#define PI 3.14159

int main()
{
    // EXERCÍCIO 1
    printf("Hello World!\n");
    return 0;


    // EXERCÍCIO 2
    int A, B, X;

    // Leitura dos valores de A e B
    scanf("%d", &A);
    scanf("%d", &B);

    // Soma de A e B
    X = A + B;

    // Impressão do resultado
    printf("X = %d\n", X);

    return 0;


    // EXERCÍCIO 3
    double raio, area;
    // Leitura do valor do raio
    scanf("%lf", &raio);

    // Cálculo da área
    area = PI * raio * raio;

    printf("A=%.4lf\n", area);

    return 0;


    // EXERCÍCIO 4
    int A, B, SOMA;

    // Leitura dos valores de A e B
    scanf("%d", &A);
    scanf("%d", &B);

    SOMA = A + B;

    printf("SOMA = %d\n", SOMA);

    return 0;


    // EXERCÍCIO 5
    int distancia;
    double combustivel, consumoMedio;

    scanf("%d", &distancia);
    scanf("%lf", &combustivel);

    consumoMedio = distancia / combustivel;

    printf("%.3lf km/l\n", consumoMedio);

    return 0;


    // EXERCÍCIO 6
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


    // EXERCÍCIO 7
    int codigo, quantidade;
    double valor;

    // Leitura do código e da quantidade
    scanf("%d %d", &codigo, &quantidade);

    // Cálculo do valor da conta a pagar
    switch (codigo)
    {
    case 1:
        valor = 4.00;
        break;
    case 2:
        valor = 4.50;
        break;
    case 3:
        valor = 5.00;
        break;
    case 4:
        valor = 2.00;
        break;
    case 5:
        valor = 1.50;
        break;
    default:
        valor = 0.00;
        break;
    }

    double total = valor * quantidade;

    printf("Total: R$ %.2lf\n", total);

    return 0;


    // EXERCÍCIO 8
    double x, y;

    // Leitura das coordenadas
    scanf("%lf %lf", &x, &y);

    if (x == 0.0 && y == 0.0)
    {
        printf("Origem\n");
    }
    else if (x == 0.0)
    {
        printf("Eixo Y\n");
    }
    else if (y == 0.0)
    {
        printf("Eixo X\n");
    }
    else if (x > 0.0 && y > 0.0)
    {
        printf("Q1\n");
    }
    else if (x < 0.0 && y > 0.0)
    {
        printf("Q2\n");
    }
    else if (x < 0.0 && y < 0.0)
    {
        printf("Q3\n");
    }
    else
    {
        printf("Q4\n");
    }
    return 0;


    // EXERCÍCIO 9
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;


    // EXERCÍCIO 10
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


    // EXERCÍCIO 11
    int valores[5];
    int i, pares = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &valores[i]);
        if (valores[i] % 2 == 0)
        {
            pares++;
        }
    }

    // Impressão da quantidade de valores pares
    printf("%d valores pares\n", pares);

    return 0;


    // EXERCÍCIO 12
    int X;
    int i;
    // Leitura do valor inteiro X
    scanf("%d", &X);

    // Impressão dos números ímpares de 1 até X
    for (i = 1; i <= X; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;


    // EXERCÍCIO 13
    int X, Y;
    int i;
    int soma = 0;
    // Leitura dos valores inteiros X e Y
    scanf("%d %d", &X, &Y);

    // Verifica se X é maior que Y e inverte os valores se necessário
    if (X > Y)
    {
        int temp = X;
        X = Y;
        Y = temp;
    }

    // Soma dos números ímpares entre X e Y
    for (i = X + 1; i < Y; i++)
    {
        if (i % 2 != 0)
        {
            soma += i;
        }
    }

    // Impressão da soma dos números ímpares
    printf("%d\n", soma);

    return 0;


    // EXERCÍCIO 14
    int N;
    int i;
    // Leitura do valor inteiro N
    scanf("%d", &N);

    // Impressão do quadrado dos valores pares de 1 até N
    for (i = 2; i <= N; i += 2)
    {
        printf("%d^2 = %lld\n", i, (long long)i * i);
    }

    return 0;


    // EXERCÍCIO 15
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


    // EXERCÍCIO 16
    int N;
    int i;
    // Leitura do valor inteiro N
    scanf("%d", &N);

    // Impressão da tabuada de N
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, N, i * N);
    }

    return 0;


    // EXERCÍCIO 17
    int N;
    int i;
    // Leitura do valor inteiro N
    scanf("%d", &N);

    // Loop para cada caso de teste
    for (i = 0; i < N; i++)
    {
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


    // EXERCÍCIO 18
    int i, j;
    i = 1;
    j = 60;

    // Loop para imprimir a sequência
    while (j >= 0)
    {
        printf("I=%d J=%d\n", i, j);
        i += 3;
        j -= 5;
    }

    return 0;


    // EXERCÍCIO 19
    int i, j;
    // Loop externo para a variável i
    for (i = 1; i <= 9; i += 2)
    {
        // Loop interno para a variável j
        for (j = 7; j >= 5; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
    }
    return 0;


    // EXERCÍCIO 20
    int M, N, i, soma;

    while (1)
    {
        // Leitura dos valores M e N
        scanf("%d %d", &M, &N);

        // Verificação se algum dos valores é menor ou igual a zero
        if (M <= 0 || N <= 0)
            break;

        // Impressão da sequência do menor até o maior
        if (M < N)
        {
            for (i = M; i <= N; i++)
            {
                printf("%d ", i);
            }
        }
        else
        {
            for (i = N; i <= M; i++)
            {
                printf("%d ", i);
            }
        }

        // Cálculo da soma dos inteiros consecutivos
        soma = 0;
        if (M < N)
        {
            for (i = M; i <= N; i++)
            {
                soma += i;
            }
        }
        else
        {
            for (i = N; i <= M; i++)
            {
                soma += i;
            }
        }

        // Impressão da soma
        printf("Sum=%d\n", soma);
    }

    return 0;
}