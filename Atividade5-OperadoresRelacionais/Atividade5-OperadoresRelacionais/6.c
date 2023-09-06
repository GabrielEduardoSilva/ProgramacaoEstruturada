//
//  6.c
//  Atividade5-OperadoresRelacionais
//
//  Created by Gabriel Eduardo on 06/09/23.
//

// Codifique um programa que lê um número inteiro. A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o número digitado é par. Se o número não for par, o programa não deve fazer nada.

#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    }

    return 0;
}

