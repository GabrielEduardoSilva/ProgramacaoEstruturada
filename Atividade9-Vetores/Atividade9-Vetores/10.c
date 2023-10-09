//
//  10.c
//  Atividade9-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int numAlunos = 15; // Número de alunos
    float notas[numAlunos]; // Vetor para armazenar as notas
    float somaNotas = 0.0; // Variável para a soma das notas

    // Leitura das notas dos alunos
    printf("Digite as notas das provas dos %d alunos:\n", numAlunos);
    for (int i = 0; i < numAlunos; i++) {
        scanf("%f", &notas[i]);
        somaNotas += notas[i]; // Somando as notas à medida que são lidas
    }

    // Cálculo da média geral
    float mediaGeral = somaNotas / numAlunos;

    // Impressão da média geral
    printf("A média geral das notas é: %.2f\n", mediaGeral);

    return 0;
}


