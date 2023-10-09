//
//  5.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int vetor[10];
    int countPares = 0;

    printf("Digite os 10 valores do vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            countPares++;
        }
    }

    printf("O vetor possui %d valores pares.\n", countPares);

    return 0;
}

