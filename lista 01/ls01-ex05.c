#include <stdio.h>
#include <stdlib.h>

int main()
{
//5) Crie um programa em C que solicite ao usu�rio dois n�meros inteiros. Em seguida,
//calcule e exiba a soma, o produto e a diferen�a entre eles.
    int a, b;
    printf("Digite dois numeros inteiros separados por espaco: \n\n");
    scanf("%d %d", &a, &b);

    printf("Soma: %i\n", a + b);
    printf("Produto: %i\n", a * b);
    printf("Diferenca : %i\n", a - b);

    return 0;
}
