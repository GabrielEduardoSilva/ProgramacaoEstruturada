//
//  6.c
//  Atividade7-EstruturasDeRepeticao
//
//  Created by Gabriel Eduardo on 11/09/23.
//

// Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra.
// 1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade

#include <stdio.h>

int main(void) {
    int opcao;
    float valorTotal = 0.0;

    printf("Bem-vindo a loja de frutas!\n");

    while (1) {
        printf("\nMenu de frutas:\n");
        printf("1 - ABACAXI (R$5,00 a unidade)\n");
        printf("2 - MACA (R$1,00 a unidade)\n");
        printf("3 - PERA (R$4,00 a unidade)\n");
        printf("4 - Finalizar compra\n");

        printf("Digite o numero da fruta desejada ou 4 para finalizar a compra: ");
        scanf("%d", &opcao);

        if (opcao == 4) {
            break;
        }

        int quantidade;
        float preco;

        switch (opcao) {
            case 1:
                preco = 5.0;
                printf("Digite a quantidade de ABACAXI desejada: ");
                break;
            case 2:
                preco = 1.0;
                printf("Digite a quantidade de MACA desejada: ");
                break;
            case 3:
                preco = 4.0;
                printf("Digite a quantidade de PERA desejada: ");
                break;
            default:
                printf("Opcao invalida.\n");
                continue;
        }

        scanf("%d", &quantidade);
        if (quantidade < 0) {
            printf("A quantidade deve ser um numero positivo.\n");
            continue;
        }

        valorTotal += preco * quantidade;
    }

    printf("Valor total da compra: R$%.2f\n", valorTotal);

    return 0;
}

