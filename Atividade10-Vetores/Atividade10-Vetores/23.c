//
//  23.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    double vetorX[5], vetorY[5];
    double produtoEscalar = 0.0;

    printf("Digite os 5 números reais do primeiro conjunto (vetorX):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &vetorX[i]);
    }

    printf("Digite os 5 números reais do segundo conjunto (vetorY):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &vetorY[i]);
    }

    for (int i = 0; i < 5; i++) {
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    printf("\nPrimeiro conjunto (vetorX):\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetorX[i]);
    }
    printf("\n");

    printf("\nSegundo conjunto (vetorY):\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetorY[i]);
    }
    printf("\n");

    printf("\nProduto escalar: %.2lf\n", produtoEscalar);

    return 0;
}

