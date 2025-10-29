#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    char letraSorteada, letraTentativa;
    int escolha, tentativas = 3;

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

    do{
        printf("Voce tem %d tentativas. \tQual a letra sorteada?\n", tentativas);
        scanf("%c", &letraTentativa);
        scanf("%c", &letraTentativa);

    if (letraSorteada == letraTentativa) {
        system("cls");
        printf("PARABENS! \nVocê acertou a letra!\n\n");
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
    }
        tentativas--;
    } while(tentativas > 0);
    printf("A letra sorteada foi %c.\n\n", letraSorteada);
    return 0;
}
