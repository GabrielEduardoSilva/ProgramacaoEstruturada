//
//  1.c
//  Atividade8-Repeticao
//
//  Created by Gabriel Eduardo on 08/10/23.
//

#include <stdio.h>

int main(void) {
    int quantidade_otimo = 0;
    int quantidade_bom = 0;
    int quantidade_regular = 0;
    int quantidade_ruim = 0;
    int quantidade_pessimo = 0;

    int idade = 0;
    char opiniao;

    int maior_idade_otimo = 0;
    int maior_idade_ruim = 0;

    int total_espectadores = 100;

    for (int i = 1; i <= total_espectadores; i++) {
        printf("Espectador %d:\n", i);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Opiniao (A, B, C, D ou E): ");
        scanf(" %c", &opiniao);

        switch (opiniao) {
            case 'A':
                quantidade_otimo++;
                if (idade > maior_idade_otimo) {
                    maior_idade_otimo = idade;
                }
                break;
            case 'B':
                quantidade_bom++;
                break;
            case 'C':
                quantidade_regular++;
                break;
            case 'D':
                quantidade_ruim++;
                if (idade > maior_idade_ruim) {
                    maior_idade_ruim = idade;
                }
                break;
            case 'E':
                quantidade_pessimo++;
                if (idade > maior_idade_ruim) {
                    maior_idade_ruim = idade;
                }
                break;
            default:
                printf("Opiniao invalida. Tente novamente.\n");
                i--;
        }
    }

    double diferenca_percentual = (double)(quantidade_bom - quantidade_regular) / total_espectadores * 100;
    double media_idade_ruim = (quantidade_ruim > 0) ? (double)idade / quantidade_ruim : 0.0;
    double percentagem_pessimo = (double)quantidade_pessimo / total_espectadores * 100;
    int diferenca_idade = maior_idade_otimo - maior_idade_ruim;

    printf("a) Quantidade de respostas Otimo: %d\n", quantidade_otimo);
    printf("b) Diferença percentual entre respostas Bom e Regular: %.2lf%%\n", diferenca_percentual);
    printf("c) Media de idade das pessoas que responderam Ruim: %.2lf\n", media_idade_ruim);
    printf("d) Percentagem de respostas Pessimo: %.2lf%%\n", percentagem_pessimo);
    printf("   Maior idade que respondeu Pessimo: %d\n", maior_idade_ruim);
    printf("e) Diferenca de idade entre a maior idade que respondeu Otimo e a maior idade que respondeu Ruim: %d\n", diferenca_idade);

    return 0;
}

