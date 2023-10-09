//
//  28.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int v[10], v1[10], v2[10];
    int contador_v1 = 0, contador_v2 = 0;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            v2[contador_v2] = v[i];
            contador_v2++;
        } else {
            v1[contador_v1] = v[i];
            contador_v1++;
        }
    }

    printf("Elementos utilizados de v1 (valores ímpares):\n");
    for (int i = 0; i < contador_v1; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    printf("Elementos utilizados de v2 (valores pares):\n");
    for (int i = 0; i < contador_v2; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}

