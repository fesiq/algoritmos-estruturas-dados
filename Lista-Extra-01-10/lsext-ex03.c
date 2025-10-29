#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Digite um numero inteiro N: \n");
    scanf("%d", &N);

    printf("Numeros primos entre 1 e %d:\n", N);

    for (int num = 2; num <= N; num++) {
        int ehPrimo = 1; //todos s�o primos at� que prove o contr�rio

        for (int div = 2; div < num; div++) {
            if (num % div == 0) {
                ehPrimo = 0; //aqui deixa de ser primo
                break;
            }
        }
        if (ehPrimo) {
            printf("%d \t", num);
        }
    }
    return 0;
}
