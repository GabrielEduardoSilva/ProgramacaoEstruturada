//
//  18.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int vetor[10];
    int x;
    int contador = 0;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número inteiro x para contar seus múltiplos: ");
    scanf("%d", &x);

    printf("Múltiplos de %d no vetor:\n", x);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
            contador++;
        }
    }
    
    if (contador == 0) {
        printf("Nenhum múltiplo de %d encontrado no vetor.\n", x);
    } else {
        printf("\nTotal de múltiplos de %d no vetor: %d\n", x, contador);
    }

    return 0;
}

