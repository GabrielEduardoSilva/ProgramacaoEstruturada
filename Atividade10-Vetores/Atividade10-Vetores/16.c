//
//  16.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    float vetor[5];
    int codigo;

    printf("Digite 5 números reais:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
    }

    printf("Digite um código (0 para sair, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    if (codigo == 0) {
        printf("Programa finalizado.\n");
    } else if (codigo == 1) {
        printf("Vetor na ordem direta:\n");
        for (int i = 0; i < 5; i++) {
            printf("%f ", vetor[i]);
        }
        printf("\n");
    } else if (codigo == 2) {
        printf("Vetor na ordem inversa:\n");
        for (int i = 4; i >= 0; i--) {
            printf("%f ", vetor[i]);
        }
        printf("\n");
    } else {
        printf("Código inválido. Por favor, digite 0, 1 ou 2.\n");
    }

    return 0;
}

