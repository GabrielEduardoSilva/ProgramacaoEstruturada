//
//  8.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int valores[6];

    printf("Digite 6 valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Valores na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}

