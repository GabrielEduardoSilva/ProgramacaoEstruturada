//
//  5.c
//  Atividade11-IntroducaoFuncoes
//
//  Created by Gabriel Eduardo on 26/10/23.
//

#include <stdio.h>

#define PI 3.1414592

double calcularVolumeEsfera(double raio) {
    double volume = (4.0 / 3.0) * PI * raio * raio * raio;
    return volume;
}

int main(void) {
    double raio;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    double volumeEsfera = calcularVolumeEsfera(raio);
    printf("O volume da esfera é: %.2lf\n", volumeEsfera);

    return 0;
}

