#include <stdio.h>
#include <stdlib.h>

void coletaDados() {
    float salario, somaSalario = 0;
    int qtdPessoas = 0, filhos, contador = 0;

    printf("Digite o número de peessoas:\n");
    scanf("%d", &contador); //pensei em fazer por parametro, mas achei por bem pedir o nº de pessoas dentro do procedimento

    if(contador < 1){
        printf("Digite uma quantidade valida!\n");
        return 0;
    }
    for (int i = 0; i < contador; i++){
        printf("Digite o salario: ");
        scanf("%f", &salario);

        printf("Digite o número de filhos: ");
        scanf("%d", &filhos);

        somaSalario += salario;
        qtdPessoas++;
        qtdPessoas += filhos; //assumindo que a média é em cima da população e não só o número de trabalhadores
    }
    float mediaSalario = somaSalario / qtdPessoas;

    printf("\nMédia salarial da população: R$ %.2f\n", mediaSalario);

}

int main() {
    printf("Pesquisa Salarial\n");

    coletaDados();

    return 0;
}
