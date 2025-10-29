#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int login(){
    int codAcessoDigitado, codAcessoCorreto = 2025, tentativas = 3;

    while (tentativas > 0){
        printf("Digite o codigo de acesso:\n");
        scanf(" %d", &codAcessoDigitado);

        if(codAcessoCorreto == codAcessoDigitado){
            printf("\nAcesso liberado!\nBem vindo ao Sistema DO ESPAÇO!\n");
            return 1;
        } else {
            tentativas--;
            if(tentativas>0) {
                printf("\nCodigo incorreto! %d tentativas restantes!\n", tentativas);
            } else {
                printf("\nAcesso bloqueado ao sistema!\nO sistema DO ESPAÇO será encerrado!\n");
                return 0;
            }
        }
    }
}

void exibeMenu(){
    printf("\n==== SISTEMA DE CONTROLE DE MISSOES ESPACIAIS ====\n\n");
    printf("1. Simular Queima de Combustível\n");
    printf("2. Calcular Ângulo de Trajetória\n");
    printf("3. Calcular Gravidade em Planeta\n");
    printf("4. Registrar Missão\n");
    printf("5. Ver Histórico de Missões\n");
    printf("6. Sair\n");
    printf("\n");
}

void simulaQueimaCombustivel(){
    int queima = 1, combustivel = 1000;
    while (queima == 1){
        printf("Pressione 1 para queimar combustível, 0 para sair do módulo:\n\n");
        scanf("%d", &queima);
        if (queima == 0){
            break;
        }
        combustivel -= 50;
        printf("Combustivel queimado! Ha %d litros restantes!\n", combustivel);
        if (combustivel == 500 || combustivel == 100){
            printf("\nHA %d LITROS!!! \nRecomenda-se atencao ao volume restante!\n\n", combustivel);
        }
        if (combustivel == 0){
            printf("\nO COMBUSTIVEL ACABOU! O simulador será ENCERRADO!\n\n\n");
            break;
        }
    }
}

float calculaAnguloTrajetoria(int valor){
    float ang = valor * 0.42 + 18;
    return ang;
}


int main()
{
    setlocale(LC_ALL, "");
    printf("\n==== SISTEMA DE CONTROLE DE MISSOES ESPACIAIS ====\n\n");
    int opcao;
    int logar = login();

    while(logar){
        exibeMenu();
        scanf("%d", &opcao);
        int distancia, editaMissao, indice;
        float angulo, missoes[40];
        switch (opcao){
            case 1:
                simulaQueimaCombustivel();
                break;
            case 2:
                printf("Digite a distancia em mil KM:\n");
                scanf(" %d", &distancia);
                angulo = calculaAnguloTrajetoria(distancia);
                printf("O angulo eh %.2f\n", angulo);
                break;
            case 3:
                printf("Aqui vão as recomendações de gravidades de diversos planetas:\n");
                printf("pipipi popopo"); //não desenvolvido, prioridade menor.
                break;
            case 4:
                printf("Digite o numero da missao que deseja registrar:\n");
                scanf("%d", &editaMissao);

                indice = (editaMissao - 1)*4;
                printf("Digite a distancia da missao %d:\n", indice/4 +1);
                scanf("%f", &missoes[indice]);

                printf("Digite o angulo da trajetoria %d:\n", indice/4 +1);
                scanf("%f", &missoes[indice+1]);

                printf("Digite o planela da missao %d (1 = Marte, 2 = Jupiter, 3 = Saturno):\n", indice/4 +1);
                scanf("%d", &missoes[indice+2]);

                printf("Digite o status da missao %d (1 = sucesso, 0 = fracasso):\n", indice/4 +1);
                scanf("%d", &missoes[indice+3]);

                break;
            case 5:
                for(int i = 0; i < 40; i+=4){

                    printf("Missao %d:\t", i/4 +1);
                    printf("Distancia: %.2f\t", missoes[i]);
                    printf("Angulo: %.2f\t", missoes[i+1]);

                    printf("Planeta: ");
                    if (missoes[i+2] == 1) {
                        printf("Marte\t");
                    }
                    if (missoes[i+2] == 2){
                        printf("Jupiter\t");
                    }
                    if(missoes[i+2] == 3){
                        printf("Saturno\t");
                    }

                    printf("Status: ");
                    if (missoes[i+3]){
                        printf("Sucesso\n");
                    } else {
                        printf("Fracasso\n");
                    }
                }
                break;
            case 6:
                logar = 0;
                printf("\nSaindo do sistema DO ESPAÇO...\n\nPressione qualquer tecla para encerrar.\n\n");
                break;
            default:
                printf("Nenhuma opção válida do menu foi selecionada. Tente de novo.\n\n");
                break;
        }
    }
    return 0;
}
