//
//  5.c
//  Atividade7-EstruturasDeRepeticao
//
//  Created by Gabriel Eduardo on 11/09/23.
//

// Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include <stdio.h>

int main(void) {
    int soma = 0; // Variável para armazenar a soma dos números pares

    printf("Soma dos 50 primeiros números pares:\n");

    for (int i = 2; i <= 100; i += 2) {
        soma += i;
    }

    printf("A soma é: %d\n", soma);

    return 0;
}

