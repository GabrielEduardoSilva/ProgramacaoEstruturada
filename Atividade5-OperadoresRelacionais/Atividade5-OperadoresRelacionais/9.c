//
//  9.c
//  Atividade5-OperadoresRelacionais
//
//  Created by Gabriel Eduardo on 06/09/23.
//

#include <stdio.h>

int main(void) {
    float salarioAtual;
    int tempoDeServico;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salarioAtual);

    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &tempoDeServico);

    float bonus = 0;

    if (tempoDeServico >= 1 && tempoDeServico <= 3) {
        bonus = 100.0;
    } else if (tempoDeServico >= 4 && tempoDeServico <= 6) {
        bonus = 200.0;
    } else if (tempoDeServico >= 7 && tempoDeServico <= 10) {
        bonus = 300.0;
    } else if (tempoDeServico > 10) {
        bonus = 500.0;
    }

    if (salarioAtual <= 500) {
        salarioAtual *= 1.25;
    } else if (salarioAtual <= 1000) {
        salarioAtual *= 1.20;
    } else if (salarioAtual <= 1500) {
        salarioAtual *= 1.15;
    } else if (salarioAtual <= 2000) {
        salarioAtual *= 1.10;
    }

    salarioAtual += bonus;

    if (bonus > 0) {
        printf("Salário reajustado: %.2f\n", salarioAtual);
    } else {
        printf("O funcionário não tem direito a nenhum aumento.\n");
    }

    return 0;
}

