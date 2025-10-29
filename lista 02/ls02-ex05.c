#include <stdio.h>

float formulaDeS (int a){
    float soma = 0.0;
    if (a <= 0){
        printf("O valor informado é inválido, tente novamente!\n");
    } else {
        for(int i = 1; i <= a; i++){
            soma+= ((i*i) + 1.0)/(i + 3.0);
            printf("(%d*%d + 1)/(%d + 3) = %d/%d = %.2f\n\n", i, i, i, i*i+1, i+3, (i*i+1.0)/(i+3.0));
            //esse print deu muito trabalho, mais até que a lógica da funcao, mas me orgulhei de cada minuto gasto :D
        }
    }
    return soma; //vai retornar zero no caso do usuário inserir <= 0
}
int main()
{
    int n;
    printf("Digite quantidade N para a formula:\n");
    scanf("%d", &n);

    printf("Soma = %.2f", formulaDeS(n));

    return 0;
}
