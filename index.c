#include <stdio.h>

int main() {
    int i, j;

    // Loop externo para a variável i
    for (i = 1; i <= 9; i += 2) {
        // Loop interno para a variável j
        for (j = 7; j >= 5; j--) {
            printf("I=%d J=%d\n", i, j);
        }
    }

    return 0;
}