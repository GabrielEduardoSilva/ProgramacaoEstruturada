//
//  main.c
//  Atividade2-OperadoresAritmeticos
//
//  Created by Gabriel Eduardo on 14/08/23.
//

// Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.

#include <stdio.h>

int main(void) {
    float num1, num2;

    // Captura dos números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Cálculos
    double soma = num1 + num2;
    double subtracao = num1 - num2;
    double multiplicacao = num1 * num2;
    
    // Verificação para evitar divisão por zero
    double divisao;
    if (num2 != 0) {
        divisao = num1 / num2;
    } else {
        printf("Nao e possivel dividir por zero.\n");
        return 1; // Saída com erro
    }

    // Apresentação dos resultados
    printf("Soma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    return 0;
}
