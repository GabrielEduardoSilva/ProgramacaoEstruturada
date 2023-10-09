//
//  7.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int vetor[10];
    int maior, posicaoMaior;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicaoMaior = 0;

    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
    }

    printf("Vetor lido: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("O maior elemento é: %d\n", maior);
    printf("Ele se encontra na posição: %d\n", posicaoMaior);

    return 0;
}
