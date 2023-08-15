//
//  10.c
//  Atividade2-OperadoresAritmeticos
//
//  Created by Gabriel Eduardo on 15/08/23.
//

// Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.

#include <stdio.h>

int main(void) {
    int numCarrosVendidos;
    float valorVendas, salarioFixo, valorPorCarroVendido;

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);

    printf("Digite o valor total de vendas: ");
    scanf("%f", &valorVendas);

    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarroVendido);

    // Cálculo do salário final do vendedor
    float comissao = numCarrosVendidos * valorPorCarroVendido;
    float bonusVendas = 0.05 * valorVendas; // 5% do valor total de vendas
    float salarioFinal = salarioFixo + comissao + bonusVendas;

    // Apresentação do resultado
    printf("O salário final do vendedor é: %.2f\n", salarioFinal);

    return 0;
}

