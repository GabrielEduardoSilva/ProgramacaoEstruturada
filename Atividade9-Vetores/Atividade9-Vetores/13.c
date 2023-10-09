//
//  13.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int valores[5];
    int maior = 0, menor = 0, posicaoMaior = 0, posicaoMenor = 0;

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);

        if (i == 0) {
            maior = menor = valores[i];
            posicaoMaior = posicaoMenor = i;
        } else {
            if (valores[i] > maior) {
                maior = valores[i];
                posicaoMaior = i;
            }
            if (valores[i] < menor) {
                menor = valores[i];
                posicaoMenor = i;
            }
        }
    }

    printf("Posição do maior valor: %d\n", posicaoMaior);
    printf("Posição do menor valor: %d\n", posicaoMenor);

    return 0;
}

