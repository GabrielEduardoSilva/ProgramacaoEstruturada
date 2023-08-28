//
//  1.c
//  Atividade4-OperadoresRelacionais
//
//  Created by Gabriel Eduardo on 28/08/23.
//

// Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.

#include <stdio.h>
#include <math.h>

int main(void) {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        float raizQuadrada = sqrt(numero);
        printf("A raiz quadrada de %.2f é %.2f\n", numero, raizQuadrada);
    } else {
        float quadrado = numero * numero;
        printf("O quadrado de %.2f é %.2f\n", numero, quadrado);
    }

    return 0;
}

