//
//  21.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int A[10], B[10], C[10];

    printf("Digite os 10 números inteiros do vetor A:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os 10 números inteiros do vetor B:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    printf("Vetor C (C = A - B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

