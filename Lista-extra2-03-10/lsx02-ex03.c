#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Digite o numero de termos Fibonacci: \n");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, insira um numero positivo maior que zero.\n");
        return 0;
    } //o enunciado não pediu, achei por bem deixar o tratamento de exceção aqui, em todo caso

    int a = 1, b = 1, c; //usando int, mas pensei em usar long pra aumentar o limite

    printf("Sequencia de Fibonacci: ");
    for (int i = 1; i <= N; i++) { //usando laço de repetição, pois o enunciado não pede recursividade
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
