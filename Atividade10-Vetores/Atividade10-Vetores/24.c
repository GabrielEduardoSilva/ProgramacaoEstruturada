//
//  24.c
//  Atividade10-Vetores
//
//  Created by Gabriel Eduardo on 09/10/23.
//

#include <stdio.h>

int main(void) {
    int numeroAluno;
    float altura, alturaMaxima = 0.0, alturaMinima = 10000.0;

    int alunoMaisAlto = 0, alunoMaisBaixo = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o número do aluno %d: ", i);
        scanf("%d", &numeroAluno);

        printf("Digite a altura do aluno %d (em metros): ", i);
        scanf("%f", &altura);

        if (altura > alturaMaxima) {
            alturaMaxima = altura;
            alunoMaisAlto = numeroAluno;
        }

        if (altura < alturaMinima) {
            alturaMinima = altura;
            alunoMaisBaixo = numeroAluno;
        }
    }

    printf("Aluno mais alto:\n");
    printf("Número: %d\n", alunoMaisAlto);
    printf("Altura: %.2f metros\n", alturaMaxima);

    printf("\nAluno mais baixo:\n");
    printf("Número: %d\n", alunoMaisBaixo);
    printf("Altura: %.2f metros\n", alturaMinima);

    return 0;
}

