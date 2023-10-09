//
//  Código 4 Finalizado.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int vetor[8]; // Vetor de 8 posições
    int x, y;     // Posições x e y

    // Leitura do vetor de 8 posições
    printf("Digite os 8 valores do vetor:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    // Leitura das posições x e y
    printf("Digite as posições x e y (entre 0 e 7): ");
    scanf("%d %d", &x, &y);

    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        int soma = vetor[x] + vetor[y];
        printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, soma);
    } else {
        printf("As posições x e y devem estar entre 0 e 7.\n");
    }

    return 0;
}

