//
//  2.c
//  Atividade6-EstruturaSwitch
//
//  Created by Gabriel Eduardo on 06/09/23.
//

#include <stdio.h>

int main(void) {
    int codigoItem;
    int quantidade;
    float precoUnitario;
    float valorTotal;

    printf("Digite o código do item (100 a 104): ");
    scanf("%d", &codigoItem);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigoItem) {
        case 100:
            precoUnitario = 10.10;
            break;
        case 101:
            precoUnitario = 8.30;
            break;
        case 102:
            precoUnitario = 8.50;
            break;
        case 103:
            precoUnitario = 12.50;
            break;
        case 104:
            precoUnitario = 13.25;
            break;
        default:
            printf("Código de item inválido.\n");
            return 1;
    }

    valorTotal = precoUnitario * quantidade;

    printf("Valor a ser pago: R$ %.2f\n", valorTotal);

    return 0;
}

