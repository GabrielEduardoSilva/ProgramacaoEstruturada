//
//  2.c
//  AtividadeAvaliativa1
//
//  Created by Gabriel Eduardo on 25/09/23.
//

#include <stdio.h>

int main(void) {
    float alturaChico = 1.50;
    float alturaZe = 1.10;
    int anos = 0;

    while (alturaZe <= alturaChico) {
        alturaChico += 0.02;
        alturaZe += 0.03;
        anos++;
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

    return 0;
}

