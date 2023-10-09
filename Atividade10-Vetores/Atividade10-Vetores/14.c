//
//  14.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int vetor[10];
    int valoresIguais[10];
    int contadorIguais = 0;

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                int valor = vetor[i];
                int encontrado = 0;
                for (int k = 0; k < contadorIguais; k++) {
                    if (valoresIguais[k] == valor) {
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado) {
                    valoresIguais[contadorIguais] = valor;
                    contadorIguais++;
                }
            }
        }
    }

    if (contadorIguais > 0) {
        printf("Valores iguais encontrados:\n");
        for (int i = 0; i < contadorIguais; i++) {
            printf("%d ", valoresIguais[i]);
        }
        printf("\n");
    } else {
        printf("Nenhum valor igual encontrado.\n");
    }

    return 0;
}

