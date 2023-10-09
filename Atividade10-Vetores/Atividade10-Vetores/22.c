//
//  22.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int vetor1[10], vetor2[10], vetor3[20];

    printf("Digite os 10 números inteiros do primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os 10 números inteiros do segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0, j = 0; i < 10; i++, j += 2) {
        vetor3[j] = vetor1[i];
    }

    for (int i = 0, j = 1; i < 10; i++, j += 2) {
        vetor3[j] = vetor2[i];
    }

    printf("Terceiro vetor com valores intercalados:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}

