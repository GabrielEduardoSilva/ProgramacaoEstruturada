//
//  6.c
//  Atividade2-OperadoresAritmeticos
//
//  Created by Gabriel Eduardo on 15/08/23.
//

// Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 

#include <stdio.h>
#include <math.h>

int main(void) {
    float raio;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    // Cálculo da área do círculo
    float area = M_PI * pow(raio, 2);

    // Apresentação do resultado
    printf("A area do circulo com raio %.2f eh %.2f\n", raio, area);

    return 0;
}
