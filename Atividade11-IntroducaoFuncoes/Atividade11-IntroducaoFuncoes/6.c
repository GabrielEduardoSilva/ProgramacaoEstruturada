//
//  6.c
//  Atividade11-IntroducaoFuncoes
//
//  Created by Gabriel Eduardo on 26/10/23.
//

#include <stdio.h>

double calcularIMC(double peso, double altura) {
    double imc = peso / (altura * altura);
    return imc;
}

int main(void) {
    double peso, altura;

    printf("Digite o peso (em quilos): ");
    scanf("%lf", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%lf", &altura);

    double imc = calcularIMC(peso, altura);
    printf("O IMC da pessoa e: %.2lf\n", imc);

    return 0;
}

