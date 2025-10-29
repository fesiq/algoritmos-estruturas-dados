#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 9;
    printf("A: %i, B: %i\n\n", a, b);
    int auxiliar = b;
    b=a;
    a=auxiliar;
    printf("po´s troca:\nA: %i, B: %i\n\n", a, b);
    return 0;
}
