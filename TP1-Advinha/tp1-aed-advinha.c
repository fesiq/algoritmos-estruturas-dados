#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1. O programa deve permitir que um usu ́ario inicial insira uma letra (mai ́uscula ou min ́uscula).

    char letraAdvinhar, letraTentativa;
    printf("insira uma letra maiuscula ou minuscula: \n");
    scanf("%c", &letraAdvinhar);

    //2. Apos a inserc̃ao, a tela deve ser limpa usando system("cls").

    system("cls");

    //3. O programa deve informar ao jogador se a letra escolhida para ser adivinhada  ́e mai ́uscula ou
    //min ́uscula.

    if (letraAdvinhar >= 65 && letraAdvinhar <=90) {
        printf("a letra que voce precisa advinhar é maiu´scula.\n");
    } else if (letraAdvinhar >= 97 && letraAdvinhar <=122) {
        printf("a letra que voce precisa advinhar é minu´scula.\n");
    } else {
        printf("Não foi inserida letra para advinhar :(\n");
        return 0;
    }

    //4. O jogador ter ́a apenas uma tentativa para acertar a letra (sem la ̧cos de repeti ̧c ̃ao).

    printf("Qual foi a letra inserida anteriormente?\n");
    scanf("%c", &letraTentativa);
    scanf("%c", &letraTentativa);

    //5. Se acertar, deve exibir uma mensagem de vit ́oria; caso contr ́ario, uma mensagem de derrota.

    if (letraAdvinhar == letraTentativa) {
        printf("Parabens! \nVocê acertou a letra!\n");
    } else {
        printf("Infelizmente você não acertou! :( \nMais sorte na próxima!\n");
    }
    return 0;
}
