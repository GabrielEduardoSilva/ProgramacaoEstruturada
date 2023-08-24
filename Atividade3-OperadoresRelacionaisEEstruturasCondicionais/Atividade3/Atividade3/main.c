//
//  main.c
//  Atividade3
//
//  Created by Gabriel Eduardo on 24/08/23.
//

#include <stdio.h>

int main(void) {
    int idade;
    float salario, altura, peso;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("A pessoa e de maior.\n");
    } else {
        printf("A pessoa e menor de idade.\n");
    }

    printf("Digite o salario: ");
    scanf("%f", &salario);

    float salarioMinimo = 1320.0;

    if (salario > salarioMinimo) {
        printf("A pessoa ganha mais que o salario minimo.\n");
    } else {
        printf("A pessoa ganha menos que o salario minimo.\n");
    }

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    if (altura > 1.8) {
        printf("A pessoa tem altura maior que 1.8m.\n");
    } else {
        printf("A pessoa tem altura igual ou menor que 1.8m.\n");
    }

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    if (peso < 60) {
        printf("A pessoa pesa menos que 60kg.\n");
    } else {
        printf("A pessoa pesa 60kg ou mais.\n");
    }

    return 0;
}

