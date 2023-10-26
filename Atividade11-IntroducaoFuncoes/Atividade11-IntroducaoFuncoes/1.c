//
//  1.c
//  Atividade11-IntroducaoFuncoes
//
//  Created by Gabriel Eduardo on 26/10/23.
//

#include <stdio.h>

int maiorEntreDois(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main(void) {
    int a, b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    int resultado = maiorEntreDois(a, b);
    printf("O maior número é: %d\n", resultado);

    return 0;
}

