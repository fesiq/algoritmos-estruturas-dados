#include <stdio.h>
#include <stdlib.h>

//8) Escreva um programa que leia uma temperatura em graus Fahrenheit e a imprima em
//graus Celsius. A conversão de graus Fahrenheit para Celsius é obtida por C=(5/9)(F-32).

int main()
{
    float temperatura;
    printf("digite a temperatura em graus Fahrenheit: \n");
    scanf("%f", &temperatura);
    printf("temperatura em graus Celsius: %.2f°C", (5.0/9)*(temperatura-32));

    return 0;
}
