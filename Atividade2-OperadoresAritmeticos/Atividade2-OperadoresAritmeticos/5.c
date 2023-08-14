//
//  5.c
//  Atividade2-OperadoresAritmeticos
//
//  Created by Gabriel Eduardo on 14/08/23.
//

// Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.

#include <stdio.h>

int main(void) {
    float custoMercadoria, valorFrete, despesasEventuais, valorVenda;

    // Captura do custo da mercadoria, valor do frete e despesas eventuais
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custoMercadoria);

    printf("Digite o valor do frete: ");
    scanf("%f", &valorFrete);

    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesasEventuais);

    // Cálculo do custo total
    float custoTotal = custoMercadoria + valorFrete + despesasEventuais;

    // Captura do valor de venda
    printf("Digite o valor de venda: ");
    scanf("%f", &valorVenda);

    // Cálculo do lucro e percentual de lucro
    float lucro = valorVenda - custoTotal;
    float percentualLucro = (lucro / custoTotal) * 100;

    // Apresentação do resultado
    printf("Custo total: %.2f\n", custoTotal);
    printf("Lucro: %.2f\n", lucro);
    printf("Percentual de lucro: %.2f%%\n", percentualLucro);

    return 0;
}

