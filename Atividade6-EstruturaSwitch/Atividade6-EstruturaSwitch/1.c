//
//  1.c
//  Atividade6-EstruturaSwitch
//
//  Created by Gabriel Eduardo on 06/09/23.
//

#include <stdio.h>

int main(void) {
    int ddd;

    // Leitura do DDD
    printf("Digite o DDD: ");
    scanf("%d", &ddd);

    // Utilizando switch para identificar a cidade
    switch (ddd) {
        case 61:
            printf("Brasília\n");
            break;
        case 71:
            printf("Salvador\n");
            break;
        case 11:
            printf("São Paulo\n");
            break;
        case 21:
            printf("Rio de Janeiro\n");
            break;
        case 32:
            printf("Juiz de Fora\n");
            break;
        case 19:
            printf("Campinas\n");
            break;
        case 27:
            printf("Vitória\n");
            break;
        case 31:
            printf("Belo Horizonte\n");
            break;
        default:
            printf("Uma cidade no Brasil sem identificação\n");
            break;
    }

    return 0;
}

