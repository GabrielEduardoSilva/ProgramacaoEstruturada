//
//  17.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int vetor[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    printf("Vetor após a atribuição de 0 a elementos negativos:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

