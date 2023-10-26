//
//  1.c
//  Atividade12-Funcoes
//
//  Created by Gabriel Eduardo on 26/10/23.
//

#include <stdio.h>
#include <math.h>

// Função para imprimir as opções e solicitar a escolha do usuário
char imprimirOpcoes(void) {
    printf("Escolha uma opção de pagamento:\n");
    printf("a) À vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preço da etiqueta)\n");
    printf("c) De 3 até 10 vezes com 3%% de juros ao mês (para compras acima de R$ 100,00)\n");
    char opcao;
    printf("Opção: ");
    scanf(" %c", &opcao);
    return opcao;
}

// Função para calcular o valor das prestações com desconto
void opcaoAVista(double totalGasto) {
    double valorComDesconto = totalGasto * 0.9;
    printf("Total com 10%% de desconto: R$ %.2lf\n", valorComDesconto);
}

// Função para calcular o valor das prestações em duas vezes
void opcaoEmDuasVezes(double totalGasto) {
    printf("Total em duas vezes: 2x de R$ %.2lf\n", totalGasto / 2);
}

// Função para calcular o valor das prestações com juros
void opcaoComJuros(double totalGasto) {
    if (totalGasto > 100.00) {
        int parcelas;
        printf("Digite o número de parcelas (de 3 a 10): ");
        scanf("%d", &parcelas);

        if (parcelas >= 3 && parcelas <= 10) {
            double juros = 0.03; // 3% de juros ao mês
            double valorPrestacao = totalGasto / parcelas;
            double valorTotalComJuros = valorPrestacao;
            for (int i = 1; i < parcelas; i++) {
                valorTotalComJuros += (totalGasto - (i * valorPrestacao)) * juros;
            }
            printf("Total em %d vezes: %.2lfx de R$ %.2lf\n", parcelas, valorTotalComJuros / parcelas, valorTotalComJuros);
        } else {
            printf("Número de parcelas inválido.\n");
        }
    } else {
        printf("Esta opção de pagamento é válida apenas para compras acima de R$ 100,00.\n");
    }
}

int main(void) {
    double totalGasto;
    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%lf", &totalGasto);

    char opcao = imprimirOpcoes();

    switch (opcao) {
        case 'a':
            opcaoAVista(totalGasto);
            break;
        case 'b':
            opcaoEmDuasVezes(totalGasto);
            break;
        case 'c':
            opcaoComJuros(totalGasto);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

