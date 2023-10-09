//
//  1.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int A[6];
    
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    int soma = A[0] + A[1] + A[5];
    printf("Soma dos valores de A[0], A[1] e A[5]: %d\n", soma);

    A[4] = 100;

    printf("Valores do vetor A:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}

