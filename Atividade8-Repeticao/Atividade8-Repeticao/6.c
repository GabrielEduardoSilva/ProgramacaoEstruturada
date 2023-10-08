//
//  6.c
//  Atividade8-Repeticao
//
//  Created by Gabriel Eduardo on 08/10/23.
//

#include <stdio.h>

int main(void) {
    char continuar = '\0';
    do {
        int mes, ano;

        printf("Digite o mês (1-12): ");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12) {
            printf("Mês inválido. Digite um valor entre 1 e 12.\n");
            continue; // Volta ao início do loop
        }

        printf("Digite o ano: ");
        scanf("%d", &ano);

        // Verificar se o ano é bissexto
        int bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

        // Array com o número de dias em cada mês
        int diasPorMes[12] = {31, 28 + bissexto, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        printf("O mês %d/%d tem %d dias.\n", mes, ano, diasPorMes[mes - 1]);

        printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &continuar); // Espaço em branco para ignorar possíveis espaços em excesso

    } while (continuar == 'S' || continuar == 's');

    return 0;
}

