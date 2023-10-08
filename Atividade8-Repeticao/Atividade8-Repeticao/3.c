//
//  3.c
//  Atividade8-Repeticao
//
//  Created by Gabriel Eduardo on 08/10/23.
//

#include <stdio.h>

int main(void) {
    int n;
    printf("Digite o valor de n (número inteiro maior ou igual a zero): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um número inteiro maior ou igual a zero.\n");
    } else {
        int termoAnterior = 0;
        int termoAtual = 1;
        int resultado = 0;

        if (n == 0) {
            resultado = termoAnterior;
        } else if (n == 1) {
            resultado = termoAtual;
        } else {
            for (int i = 2; i <= n; i++) {
                resultado = termoAnterior + termoAtual;
                termoAnterior = termoAtual;
                termoAtual = resultado;
            }
        }

        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, resultado);
    }

    return 0;
}

