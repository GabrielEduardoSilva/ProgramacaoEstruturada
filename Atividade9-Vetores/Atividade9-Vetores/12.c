//
//  12.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int valores[5];
    int maior, menor, soma = 0;
    float media;

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);

        if (i == 0) {
            maior = menor = valores[i];
        } else {
            if (valores[i] > maior) {
                maior = valores[i];
            }
            if (valores[i] < menor) {
                menor = valores[i];
            }
        }

        soma += valores[i];
    }

    media = (float)soma / 5;

    printf("Valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}

