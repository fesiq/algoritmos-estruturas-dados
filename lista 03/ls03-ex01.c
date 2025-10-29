#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite 2 números inteiros:\n");
    scanf("%d %d", &a, &b);

    if(&a > &b){
        printf("O endereço de A eh maior. (&a está depois de &b)\n\n");
    } else {
        printf("O endereço de B eh maior. (&b está depois de &a)\n\n");
    }
    printf("Endereço de A: %p, valor: %d\nEndereço de B: %p, valor: %d\n", (void*)&a, a, (void*)&b, b);

    return 0;
}

//Escreva um programa em C que leia dois inteiros, armazenando-os em variáveis. O programa
//deve comparar os endereços das variáveis e exibir o maior deles.
