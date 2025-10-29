#include <stdio.h>
#include <stdlib.h>

int main() {
    float preco, totalCompra = 0.0, desconto = 0.0;
    int qtdAlimentos = 0;
    char categoria;

    printf("Supermercado\n");
    printf("Digite o preco do produto (0 para encerrar): \n");

    while (1) {
        scanf("%f", &preco);

        if (preco == 0) {
            break;
        }

        printf("Digite a categoria (A - Alimento, L - Limpeza, V - Vestuario): ");
        scanf(" %c", &categoria); //o espa�o para evitar aquele problema do buffer

        totalCompra += preco;

        if (categoria == 'A' || categoria == 'a') { //diferen�a maius/minus
            qtdAlimentos++;
        }

        printf("\nDigite o preco do proximo produto (0 para encerrar): ");
    }

    if (totalCompra > 200.0) {
        desconto = totalCompra * 0.15;
    }

    printf("\n\nRESUMO DA COMPRA\n");
    printf("Quantidade de produtos da categoria Alimentos: %d\n", qtdAlimentos);
    printf("Valor total da compra (sem desconto): R$ %.2f\n", totalCompra);
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor final a pagar: R$ %.2f\n\n", totalCompra - desconto);

    return 0;
}
