//
//  2.c
//  Atividade7-EstruturasDeRepeticao
//
//  Created by Gabriel Eduardo on 11/09/23.
//

// Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.

#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número deve ser positivo.\n");
        return 1;
    }

    printf("Números naturais de %d até 0:\n", n);
    for (int i = n; i >= 0; --i) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
