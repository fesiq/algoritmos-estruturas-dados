#include <stdio.h>
#include <stdlib.h>

int main() {
    int chao, teto;
    scanf("%d %d", &chao, &teto);

    for (int num = chao + 1; num <= teto; num++) {
        int ehPrimo = 1;

        for (int div = 2; div < num; div++) {
            if (num % div == 0) {
                ehPrimo = 0;
                break;
            }
        }
        if (ehPrimo) {
            printf(" %d", num);
        }
    }
    return 0;
}


//Escreva um programa que receba dois números inteiros e imprima todos os números primos entre os números recebidos.
//
//O primeiro número lido deve ser menor que o segundo.
//
//Número primo
//
//Um número é classificado como primo se ele é maior do que um e é divisível apenas por um e por ele mesmo. Apenas números naturais são classificados como primos.
//
//
//
//Entrada: dois valores inteiros.
//
//Saida: Um linha contendo todos números primos no intervalo.
