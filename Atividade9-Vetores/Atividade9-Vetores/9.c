//
//  9.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int valores[6];
    int contadorPares = 0;

    printf("Digite 6 valores inteiros pares:\n");

    for (int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);

        if (valores[i] % 2 != 0) {
            printf("O valor digitado não é par. Digite um valor par.\n");
            i--;
            continue;
        }

        contadorPares++;
    }

    if (contadorPares != 6) {
        printf("Você não digitou 6 valores pares.\n");
        return 1;
    }

    printf("Valores na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}

