//
//  4.c
//  Atividade7-EstruturasDeRepeticao
//
//  Created by Gabriel Eduardo on 11/09/23.
//

// Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.

#include <stdio.h>

int main(void) {
    int contador = 0;
    int numero = 1;

    printf("Os cinco primeiros múltiplos de 3 maiores que 0 são:\n");

    while (contador < 5) {
        if (numero % 3 == 0) {
            printf("%d ", numero);
            contador++;
        }
        numero++;
    }

    printf("\n");

    return 0;
}

