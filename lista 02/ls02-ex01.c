#include <stdio.h>
#include <stdlib.h>

void leNotas(float nota1, float nota2, float nota3, char tipo){
    float soma = 0;
    if (tipo == 'P'){
        int pesos[] = {5, 3, 2};
        soma += pesos[0] * nota1;
        soma += pesos[1] * nota2;
        soma += pesos[2] * nota3;

        printf("Media ponderada das notas: \t %.2f\n", soma/10);
        //mantendo o nº 10, mais simples, mas poderia ser a soma
        //dos itens do array
    } else if (tipo == 'A') {
        soma += nota1 + nota2 + nota3;

        printf("Media simples das notas: \t %.2f\n", soma/3);
    } else {
        printf("Não foi inserido um tipo correto de média.\n");
    }
}

int main()
{
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0;
    char tipo;

    printf("Digite a quantidade de alunos: \t");
    int nAlunos;
    scanf("%d", &nAlunos);

    for(int i = 1; i <= nAlunos; i++) {
        printf("Digite as 3 notas do aluno %d: \n", i);
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        printf("Digite o tipo de media (A para aritmetica, P para ponderada): \n");
        scanf(" %c", &tipo); //correção para evitar algum espaço em branco no buffer

        leNotas(nota1, nota2, nota3, tipo);
    }

    return 0;
}
