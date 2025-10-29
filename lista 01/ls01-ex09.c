#include <stdio.h>
#include <stdlib.h>

//9) Escreva um programa que pergunte qual o tempo transcorrido em um cronômetro em
//horas, minutos e segundos e transforme (e mostre) este tempo em segundos.

int main()
{
    int horas, minutos, segundos, soma;
    printf("digite o tempo do cronômetro no formato HH:MM:SS \n");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);
    soma = segundos + (minutos *60) + (horas * 3600);
    printf("\ntempo em segundos: %i s.\n", soma);
    return 0;
}
