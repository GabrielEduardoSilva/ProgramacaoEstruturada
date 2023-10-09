//
//  27.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int vetor[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Números primos e suas posições no vetor:\n");
    for (int i = 0; i < 10; i++) {
        if (ehPrimo(vetor[i])) {
            printf("Número primo: %d, Posição: %d\n", vetor[i], i);
        }
    }

    return 0;
}

