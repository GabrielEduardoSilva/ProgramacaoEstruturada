//
//  1.c
//  AtividadeAvaliativa2
//
//  Created by Gabriel Eduardo on 16/11/23.
//

#include <stdio.h>

// Função para validar a quantidade de peças fabricadas
int validaQuantidade(void) {
    int quantidade;
    do {
        printf("Informe a quantidade de pecas fabricadas: ");
        scanf("%d", &quantidade);
        if (quantidade < 0) {
            printf("Quantidade invalida. Por favor, informe um valor nao negativo.\n");
        }
    } while (quantidade < 0);
    return quantidade;
}

// Função para calcular o salário com base na quantidade de peças
float calculaSalario(int quantidade) {
    const float salarioBase = 600.0;
    const int limite1 = 50;
    const int limite2 = 80;
    const float adicional1 = 0.50;
    const float adicional2 = 0.75;

    float salarioTotal = salarioBase;

    if (quantidade > limite1) {
        salarioTotal += (quantidade - limite1) * adicional1;
    }

    if (quantidade > limite2) {
        salarioTotal += (quantidade - limite2) * (adicional2 - adicional1);
    }

    return salarioTotal;
}

void mostraFinal(int quantidade) {
    // Calcula o salário e mostra o resultado
    printf("Salario: R$%.2f\n", calculaSalario(quantidade));
}

int main(void) {
    int quantidade;
    char continuar;

    do {
        // Solicita a quantidade de peças fabricadas
        quantidade = validaQuantidade();

        mostraFinal(quantidade);

        // Pergunta ao usuário se deseja continuar
        printf("Deseja calcular o salario de outro funcionario? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    return 0;
}
