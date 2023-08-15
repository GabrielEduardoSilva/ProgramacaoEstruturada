//
//  9.c
//  Atividade2-OperadoresAritmeticos
//
//  Created by Gabriel Eduardo on 15/08/23.
//

// O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor

#include <stdio.h>

int main(void) {
    float custoFabrica, percentualDistribuidor, percentualImpostos;

    // Valores fixos dos percentuais do distribuidor e impostos
    percentualDistribuidor = 0.28;
    percentualImpostos = 0.45;

    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    // Cálculo do custo final ao consumidor
    float custoFinal = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImpostos);

    // Apresentação do resultado
    printf("O custo final ao consumidor é: %.2f\n", custoFinal);

    return 0;
}

