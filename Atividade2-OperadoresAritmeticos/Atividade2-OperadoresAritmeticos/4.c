//
//  4.c
//  Atividade2-OperadoresAritmeticos
//
//  Created by Gabriel Eduardo on 14/08/23.
//

// Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.

#include <stdio.h>

int main(void) {
    float valorReais, cotacaoDolar;

    // Captura do valor em reais e cotação do dólar
    printf("Digite o valor em reais: ");
    scanf("%f", &valorReais);

    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacaoDolar);

    // Conversão para dólares
    float valorDolares = valorReais / cotacaoDolar;

    // Apresentação do resultado
    printf("%.2f reais equivalem a %.2f dólares\n", valorReais, valorDolares);

    return 0;
}

