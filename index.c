#include <stdio.h>

#define PI 3.14159

int main() {
    double raio, area;

    // Leitura do valor do raio
    scanf("%lf", &raio);

    // Cálculo da área
    area = PI * raio * raio;

    // Impressão do resultado
    printf("A=%.4lf\n", area);

    return 0;
}