//
//  3.c
//  Atividade6-EstruturaSwitch
//
//  Created by Gabriel Eduardo on 06/09/23.
//

#include <stdio.h>

int main() {
    int escolhaPrato, escolhaSobremesa, escolhaBebida;
    int caloriasPrato, caloriasSobremesa, caloriasBebida;
    int totalCalorias;

    printf("Escolha o prato:\n");
    printf("1 - Vegetariano (180 calorias)\n");
    printf("2 - Peixe (230 calorias)\n");
    printf("3 - Frango (250 calorias)\n");
    printf("4 - Carne (350 calorias)\n");
    scanf("%d", &escolhaPrato);

    printf("Escolha a sobremesa:\n");
    printf("1 - Abacaxi (75 calorias)\n");
    printf("2 - Sorvete diet (110 calorias)\n");
    printf("3 - Mousse diet (170 calorias)\n");
    printf("4 - Mousse de chocolate (200 calorias)\n");
    scanf("%d", &escolhaSobremesa);

    printf("Escolha a bebida:\n");
    printf("1 - Chá (20 calorias)\n");
    printf("2 - Suco de laranja (70 calorias)\n");
    printf("3 - Suco de melão (100 calorias)\n");
    printf("4 - Refrigerante diet (65 calorias)\n");
    scanf("%d", &escolhaBebida);

    switch (escolhaPrato) {
        case 1:
            caloriasPrato = 180;
            break;
        case 2:
            caloriasPrato = 230;
            break;
        case 3:
            caloriasPrato = 250;
            break;
        case 4:
            caloriasPrato = 350;
            break;
        default:
            printf("Escolha de prato inválida.\n");
            return 1;

    switch (escolhaSobremesa) {
        case 1:
            caloriasSobremesa = 75;
            break;
        case 2:
            caloriasSobremesa = 110;
            break;
        case 3:
            caloriasSobremesa = 170;
            break;
        case 4:
            caloriasSobremesa = 200;
            break;
        default:
            printf("Escolha de sobremesa inválida.\n");
            return 1;
    }

    switch (escolhaBebida) {
        case 1:
            caloriasBebida = 20;
            break;
        case 2:
            caloriasBebida = 70;
            break;
        case 3:
            caloriasBebida = 100;
            break;
        case 4:
            caloriasBebida = 65;
            break;
        default:
            printf("Escolha de bebida inválida.\n");
            return 1;
    }

    totalCalorias = caloriasPrato + caloriasSobremesa + caloriasBebida;

    printf("Total de calorias da refeição: %d calorias\n", totalCalorias);

    return 0;
}

