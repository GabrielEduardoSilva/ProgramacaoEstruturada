//
//  2.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int valores[100];
    int numValores;

    printf("Quantos valores inteiros deseja inserir? (até 100): ");
    scanf("%d", &numValores);

    if (numValores < 1 || numValores > 100) {
        printf("Número de valores inválido. Insira um número entre 1 e 100.\n");
        return 1;
    }

    printf("Digite os %d valores inteiros:\n", numValores);

    for (int i = 0; i < numValores; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Valores lidos:\n");
    for (int i = 0; i < numValores; i++) {
        printf("%d\n", valores[i]);
    }

    return 0;
}

