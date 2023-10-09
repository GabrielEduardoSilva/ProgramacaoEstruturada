//
//  10.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int numAlunos = 15;
    float notas[numAlunos];
    float somaNotas = 0.0;

    printf("Digite as notas das provas dos %d alunos:\n", numAlunos);
    for (int i = 0; i < numAlunos; i++) {
        scanf("%f", &notas[i]);
        somaNotas += notas[i];
    }

    float mediaGeral = somaNotas / numAlunos;

    printf("A média geral das notas é: %.2f\n", mediaGeral);

    return 0;
}


