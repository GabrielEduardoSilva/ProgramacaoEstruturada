//
//  2.c
//  Atividade11-IntroducaoFuncoes
//
//  Created by Gabriel Eduardo on 26/10/23.
//

#include <stdio.h>

void imprimirMesEQuantidadeDias(int numeroMes) {
    if (numeroMes < 1 || numeroMes > 12) {
        printf("Número de mês inválido. Deve estar entre 1 e 12.\n");
    } else {
        const char *meses[] = {
            "janeiro", "fevereiro", "março", "abril",
            "maio", "junho", "julho", "agosto",
            "setembro", "outubro", "novembro", "dezembro"
        };

        const int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        printf("Mês: %s\n", meses[numeroMes - 1]);
        printf("Quantidade de dias: %d\n", dias[numeroMes - 1]);
    }
}

int main(void) {
    int numeroMes;

    printf("Digite um número de mês (entre 1 e 12): ");
    scanf("%d", &numeroMes);

    imprimirMesEQuantidadeDias(numeroMes);

    return 0;
}

