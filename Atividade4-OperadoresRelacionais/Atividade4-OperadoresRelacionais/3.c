//
//  3.c
//  Atividade4-OperadoresRelacionais
//
//  Created by Gabriel Eduardo on 28/08/23.
//

// Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior).

#include <stdio.h>

int main(void) {
    float A, B, C;

    printf("Digite três valores (A B C): ");
    scanf("%f %f %f", &A, &B, &C);

    if (A <= B && A <= C) {
        if (B <= C) {
            printf("Valores em ordem ascendente: %.2f %.2f %.2f\n", A, B, C);
        } else {
            printf("Valores em ordem ascendente: %.2f %.2f %.2f\n", A, C, B);
        }
    } else if (B <= A && B <= C) {
        if (A <= C) {
            printf("Valores em ordem ascendente: %.2f %.2f %.2f\n", B, A, C);
        } else {
            printf("Valores em ordem ascendente: %.2f %.2f %.2f\n", B, C, A);
        }
    } else {
        if (A <= B) {
            printf("Valores em ordem ascendente: %.2f %.2f %.2f\n", C, A, B);
        } else {
            printf("Valores em ordem ascendente: %.2f %.2f %.2f\n", C, B, A);
        }
    }

    return 0;
}

