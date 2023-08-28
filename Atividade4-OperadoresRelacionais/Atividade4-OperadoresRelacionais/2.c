//
//  2.c
//  Atividade4-OperadoresRelacionais
//
//  Created by Gabriel Eduardo on 28/08/23.
//

// Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 

#include <stdio.h>

int main(void) {
    float A, B, C, D;

    printf("Digite quatro valores (A B C D): ");
    scanf("%f %f %f %f", &A, &B, &C, &D);

    float maior = A;
    if (B > maior) maior = B;
    if (C > maior) maior = C;
    if (D > maior) maior = D;

    float menor = A;
    if (B < menor) menor = B;
    if (C < menor) menor = C;
    if (D < menor) menor = D;

    printf("O maior valor é: %.2f\n", maior);
    printf("O menor valor é: %.2f\n", menor);

    return 0;
}

