//
//  2.c
//  Atividade2-OperadoresAritmeticos
//
//  Created by Gabriel Eduardo on 14/08/23.
//

// Escreva um programa que receba um número qualquer e mostre o seu dobro.

#include <stdio.h>

int main(void) {
    float numero;

    // Captura do número
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Cálculo do dobro
    float dobro = numero * 2;

    // Apresentação do resultado
    printf("O dobro de %.2f eh %.2f\n", numero, dobro);

    return 0;
}
