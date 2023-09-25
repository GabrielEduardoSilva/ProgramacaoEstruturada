//
//  9.c
//  AtividadeAvaliativa1
//
//  Created by Gabriel Eduardo on 25/09/23.
//

#include <stdio.h>

int main(void) {
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votos_nulos = 0, votos_em_branco = 0;

    printf("Digite o código do candidato (ou 0 para encerrar a votação): ");

    do {
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_em_branco++;
                break;
            case 0:
                break;
            default:
                printf("Código de voto inválido. Tente novamente.\n");
        }

        if (voto != 0) {
            printf("Digite o código do candidato (ou 0 para encerrar a votação): ");
        }

    } while (voto != 0);

    printf("Total de votos para Candidato 1: %d\n", candidato1);
    printf("Total de votos para Candidato 2: %d\n", candidato2);
    printf("Total de votos para Candidato 3: %d\n", candidato3);
    printf("Total de votos para Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votos_nulos);
    printf("Total de votos em branco: %d\n", votos_em_branco);

    return 0;
}

