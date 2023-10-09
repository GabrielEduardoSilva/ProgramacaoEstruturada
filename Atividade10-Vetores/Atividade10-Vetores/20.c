//
//  20.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int vetor1[10];
    int vetor2[10];
    int contador_impar = 0;

    printf("Digite 10 números inteiros no intervalo [0, 50]:\n");
    
    for (int i = 0; i < 10; i++) {
        do {
            scanf("%d", &vetor1[i]);
            if (vetor1[i] < 0 || vetor1[i] > 50) {
                printf("Por favor, digite um número no intervalo [0, 50]: ");
            }
        } while (vetor1[i] < 0 || vetor1[i] > 50);

        if (vetor1[i] % 2 != 0) {
            vetor2[contador_impar] = vetor1[i];
            contador_impar++;
        }
    }

    printf("\nPrimeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    printf("\nSegundo vetor (números ímpares do primeiro vetor):\n");
    for (int i = 0; i < contador_impar; i++) {
        printf("%d ", vetor2[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    return 0;
}
