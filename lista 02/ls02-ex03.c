#include <stdio.h>
#include <stdlib.h>

void ordenaInteiros(int a, int b, int c){
    int temp;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d %d %d\n", a, b, c);
}

int main()
{
    printf("Digite a quantidade de conjuntos: \n");
    int qtd;
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++){
        printf("Digite os numeros:\n");
        int num1, num2, num3;
        scanf("%d %d %d", &num1, &num2, &num3);
        ordenaInteiros(num1, num2, num3);
    }
    return 0;

}
