//
//  7.c
//  Atividade2-OperadoresAritmeticos
//
//  Created by Gabriel Eduardo on 15/08/23.
//

// Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.

#include <stdio.h>

int main(void) {
    int anos, meses, dias;

    // Captura da idade em anos, meses e dias
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    printf("Digite a idade em meses: ");
    scanf("%d", &meses);

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    // Cálculo da idade total em dias
    int idadeDias = (anos * 365) + (meses * 30) + dias;

    // Apresentação do resultado
    printf("A idade total em dias eh: %d dias\n", idadeDias);

    return 0;
}
