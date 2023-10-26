//
//  4.c
//  Atividade11-IntroducaoFuncoes
//
//  Created by Gabriel Eduardo on 26/10/23.
//

#include <stdio.h>

#define PI 3.1414592

double calcularVolumeCilindro(double raio, double altura) {
    double volume = PI * raio * raio * altura;
    return volume;
}

int main(void) {
    double raio, altura;

    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);

    double volumeCilindro = calcularVolumeCilindro(raio, altura);
    printf("O volume do cilindro é: %.2lf\n", volumeCilindro);

    return 0;
}

