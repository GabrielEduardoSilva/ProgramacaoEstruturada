//
//  3.c
//  Atividade7-EstruturasDeRepeticao
//
//  Created by Gabriel Eduardo on 11/09/23.
//

// Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). 

#include <stdio.h>

int main(void) {
    int n;

    printf("Digite um número inteiro N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("N deve ser um número inteiro positivo.\n");
        return 1;
    }

    printf("Os primeiros %d números naturais ímpares são:\n", n);
    for (int i = 1; n > 0; i += 2) {
        printf("%d ", i);
        n--;
    }
    printf("\n");

    return 0;
}

