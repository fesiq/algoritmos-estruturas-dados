#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    char letraSorteada, letraTentativa;
    int escolha, tentativas = 3, jogar = 0, pontuacao;
    int distrPont[] = {0, 50, 80, 100};

    void escolhaMaiusMinus(){
        printf("Escolha jogar com letras maiusculas ou minusculas: \n\n");
        printf("1 - Maiuscula \n2 - Minuscula \n\n");
        scanf("%d", &escolha);

        if (escolha == 1) {
            letraSorteada = (char)((rand() % 26)+65);
            system("cls");
        } else if (escolha == 2) {
            letraSorteada = (char)((rand() % 26)+97);
            system("cls");
        } else {
            printf("Opcao invalida.\n");
        return 0;
        }
    }

    do{
        printf("Olá! Bem vindo ao jogo de advinhação!\nDigite uma opção:\n");
        printf("1 - Iniciar novo jogo\n2 - Sair\n\n");
        scanf("%d", &jogar);

        if(jogar == 1){ //apesar de imprimir na tela duas opções, qualquer coisa diferente de 1 vai fazer o programa sair, sem menção no enunciado.
            escolhaMaiusMinus(); //um pouco de modularização, isso permite eu testar o código "desativando" a aleatoriedade
            do{
                printf("Voce tem %d tentativas. \tQual a letra sorteada?\n", tentativas);
                scanf("%c", &letraTentativa);
                scanf("%c", &letraTentativa);

            if (letraSorteada == letraTentativa) {
                system("cls");
                printf("PARABENS! \nVocê acertou a letra!\n\n");
                pontuacao = distrPont[tentativas];
                break;
            } else {
                system("cls");
                if(letraTentativa < letraSorteada) {
                    system("cls");
                    printf("Resposta errada!\n**** Dica: letra ANTES da sorteada. ****\n");
                } else {
                    system("cls");
                    printf("Resposta errada!\n**** Dica: letra DEPOIS da sorteada. ****\n");
                }
                pontuacao = 0;
            }
                tentativas--;
            } while(tentativas > 0);
            printf("A letra sorteada foi %c.\n\n", letraSorteada);
            printf("Sua pontuação é %d.\n", pontuacao);
            tentativas = 3; //quando houver o loop isso vai reestabelecer a quantidade de tentativas.
        } else return 0;
    } while (jogar == 1);
    return 0;
}
