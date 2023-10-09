//
//  3.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int tamanho = 10;
    float vetorOriginal[tamanho];
    float vetorQuadrado[tamanho];

    printf("Digite %d números reais:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetorOriginal[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        vetorQuadrado[i] = vetorOriginal[i] * vetorOriginal[i];
    }

    printf("Conjunto original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorOriginal[i]);
    }
    printf("\n");

    printf("Conjunto dos quadrados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetorQuadrado[i]);
    }
    printf("\n");

    return 0;
}

