//
//  8.c
//  Atividade5-OperadoresRelacionais
//
//  Created by Gabriel Eduardo on 06/09/23.
//

// Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. As condições para aposentadoria são: • Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.

#include <stdio.h>

int main(void) {
    int idade, tempoDeServico;

    // Leitura da idade e tempo de serviço
    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &tempoDeServico);

    // Verificação das condições de aposentadoria
    if (idade >= 65 || tempoDeServico >= 30 || (idade >= 60 && tempoDeServico >= 25)) {
        printf("O trabalhador pode se aposentar.\n");
    } else {
        printf("O trabalhador não pode se aposentar.\n");
    }

    return 0;
}

