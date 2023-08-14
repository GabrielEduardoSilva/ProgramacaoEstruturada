//
//  3.c
//  Atividade2-OperadoresAritmeticos
//
//  Created by Gabriel Eduardo on 14/08/23.
//

// Dadas as medidas de uma sala, informe sua área.

#include <stdio.h>

int main(void) {
    float comprimento, largura;

    // Captura das medidas
    printf("Digite o comprimento da sala: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da sala: ");
    scanf("%f", &largura);

    // Cálculo da área
    float area = comprimento * largura;

    // Apresentação do resultado
    printf("A area da sala eh %.2f metros quadrados\n", area);

    return 0;
}
