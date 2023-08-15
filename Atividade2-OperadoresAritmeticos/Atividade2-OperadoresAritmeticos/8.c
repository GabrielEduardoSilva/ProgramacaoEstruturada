//
//  8.c
//  Atividade2-OperadoresAritmeticos
//
//  Created by Gabriel Eduardo on 15/08/23.
//

// Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

#include <stdio.h>

int main(void) {
    float salarioAtual, percentualReajuste;

    printf("Digite o salário mensal atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    // Cálculo do novo salário
    float novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);

    // Apresentação do resultado
    printf("O novo salário é: %.2f\n", novoSalario);

    return 0;
}

