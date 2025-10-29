#include <stdio.h>
#include <stdlib.h>

//7) Faça um programa que receba um número inteiro e imprima na tela o seu antecessor
//e o seu sucessor.

int main()
{
    int numero;
    printf("digite um numero: \n");
    scanf("%d", &numero);
    printf("\nantecessor: %d, \tsucessor: %d\n\n", numero - 1, numero + 1);

    return 0;
}
