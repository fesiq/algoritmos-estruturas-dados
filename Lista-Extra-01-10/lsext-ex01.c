#include <stdio.h>
#include <stdlib.h>

int main() {
    float notaP1, notaP2, media, notaFinal, mediaFinal;

    printf("Digite a nota da P1: \n");
    scanf("%f", &notaP1);

    printf("Digite a nota da P2: \n");
    scanf("%f", &notaP2);

    media = (notaP1 + notaP2) / 2.0;

    if (media >= 7.0) {
        printf("Media: %.1f\n", media);
        printf("Aprovado!\n");
    } else {
        printf("Digite a nota da Prova Final: \n");
        scanf("%f", &notaFinal);

        mediaFinal = (media + notaFinal) / 2.0;
        printf("Media Final: %.1f\n", mediaFinal);

        if (mediaFinal >= 5.0) {
            printf("Aprovado!\n");
        } else {
            printf("Reprovado!\n");
        }
    }

    return 0;
}
