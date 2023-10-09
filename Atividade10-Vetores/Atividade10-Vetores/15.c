//
//  15.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int vetor[20];
    int tamanho = 20;

    printf("Digite 20 números inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] == vetor[j]) {
                vetor[j] = -123131241;
            }
        }
    }

    printf("Elementos únicos:\n");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] != -123131241) {
            printf("%d ", vetor[i]);
        }
    }
    
    printf("\n");

    return 0;
}

