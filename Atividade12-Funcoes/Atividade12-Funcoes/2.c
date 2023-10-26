//
//  2.c
//  Atividade12-Funcoes
//
//  Created by Gabriel Eduardo on 26/10/23.
//

#include <stdio.h>

void calcularLocacoesGratuitas(const int filmesRetirados[], int locacoesGratuitas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        locacoesGratuitas[i] = filmesRetirados[i] / 15;
    }
}

int main(void) {
    int vetorFilmes[500];
    int vetorLocacoesGratuitas[500];

    for (int i = 0; i < 500; i++) {
        vetorFilmes[i] = i + 1; // Preenchendo o vetor com valores hipotéticos
    }

    calcularLocacoesGratuitas(vetorFilmes, vetorLocacoesGratuitas, 500);

    for (int i = 0; i < 500; i++) {
        printf("Cliente %d tem direito a %d locações gratuitas.\n", i + 1, vetorLocacoesGratuitas[i]);
    }

    return 0;
}


