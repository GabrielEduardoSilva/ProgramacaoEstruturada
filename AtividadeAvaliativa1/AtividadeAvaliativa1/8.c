//
//  8.c
//  AtividadeAvaliativa1
//
//  Created by Gabriel Eduardo on 25/09/23.
//

#include <stdio.h>

int main(void) {
    double salario, total_salario = 0.0;
    int num_filhos, total_filhos = 0;
    double maior_salario = 0.0;
    int pessoas_ate_100 = 0;
    int total_pessoas = 0;

    do {
        printf("Digite o salário (ou valor negativo para encerrar): ");
        scanf("%lf", &salario);

        if (salario < 0) {
            break;
        }

        printf("Digite o número de filhos: ");
        scanf("%d", &num_filhos);

        total_salario += salario;

        total_filhos += num_filhos;

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        if (salario <= 100.0) {
            pessoas_ate_100++;
        }

        total_pessoas++;

    } while (1);

    double media_salario = total_salario / total_pessoas;

    double media_filhos = (double)total_filhos / total_pessoas;

    double percentual_ate_100 = (double)pessoas_ate_100 / total_pessoas * 100;

    printf("Média do salário da população: %.2lf\n", media_salario);
    printf("Média do número de filhos: %.2lf\n", media_filhos);
    printf("Maior salário: %.2lf\n", maior_salario);
    printf("Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentual_ate_100);

    return 0;
}

