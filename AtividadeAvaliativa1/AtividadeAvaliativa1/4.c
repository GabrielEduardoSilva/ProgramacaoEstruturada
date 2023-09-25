//
//  4.c
//  AtividadeAvaliativa1
//
//  Created by Gabriel Eduardo on 25/09/23.
//

#include <stdio.h>

int main(void) {
    double A, B, C;
    double maior, menor, meio;

    // Solicitar ao usuário os valores dos lados do triângulo
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    // Encontrar o maior, o menor e o lado do meio
    if (A >= B && A >= C) {
        maior = A;
        meio = B >= C ? B : C;
        menor = B <= C ? B : C;
    } else if (B >= A && B >= C) {
        maior = B;
        meio = A >= C ? A : C;
        menor = A <= C ? A : C;
    } else {
        maior = C;
        meio = A >= B ? A : B;
        menor = A <= B ? A : B;
    }

    // Verificar se os lados formam um triângulo
    if (maior < meio + menor) {
        // Verificar o tipo de triângulo com base no Teorema de Pitágoras
        if (maior * maior == meio * meio + menor * menor) {
            printf("Triângulo Retângulo\n");
        } else if (maior * maior > meio * meio + menor * menor) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Não é um triângulo.\n");
    }

    return 0;
}

