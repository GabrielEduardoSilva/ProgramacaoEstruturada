//
//  7.c
//  AtividadeAvaliativa1
//
//  Created by Gabriel Eduardo on 25/09/23.
//

#include <stdio.h>

int main(void) {
    int total_alunos = 30;
    double notas[30][3];
    double media_geral = 0.0;

    for (int i = 0; i < total_alunos; i++) {
        double n1, n2, n3;
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        double media = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        notas[i][0] = n1;
        notas[i][1] = n2;
        notas[i][2] = n3;

        printf("Média do aluno %d: %.2lf - ", i + 1, media);
        if (media >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }

        media_geral += media;
    }

    media_geral /= total_alunos;

    printf("Média Geral da Turma: %.2lf\n", media_geral);

    return 0;
}

