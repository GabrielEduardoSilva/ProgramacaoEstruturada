//
//  25.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int vetor[100];
    int numero = 1;
    int contador = 0;

    while (contador < 100) {
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[contador] = numero;
            contador++;
        }
        numero++;
    }

    printf("Os 100 primeiros naturais que não são múltiplos de 7 ou que não terminam com 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

