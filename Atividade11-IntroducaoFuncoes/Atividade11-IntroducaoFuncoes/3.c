//
//  3.c
//  Atividade11-IntroducaoFuncoes
//
//  Created by Gabriel Eduardo on 26/10/23.
//

#include <stdio.h>

double converterFahrenheitParaCelsius(double temperaturaFahrenheit) {
    double temperaturaCelsius = (temperaturaFahrenheit - 32.0) * (5.0/9.0);
    return temperaturaCelsius;
}

int main(void) {
    double temperaturaFahrenheit;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%lf", &temperaturaFahrenheit);

    double temperaturaCelsius = converterFahrenheitParaCelsius(temperaturaFahrenheit);
    printf("A temperatura em graus Celsius é: %.2lf\n", temperaturaCelsius);

    return 0;
}

