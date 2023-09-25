//
//  10.c
//  AtividadeAvaliativa1
//
//  Created by Gabriel Eduardo on 25/09/23.
//

#include <stdio.h>
#include <string.h>

#define MAX_CIDADES 200

struct Cidade {
    int codigo;
    char estado[3];
    int veiculos;
    int acidentes;
};

int main(void) {
    struct Cidade cidades[MAX_CIDADES];
    int total_cidades;

    printf("Digite o número de cidades a serem processadas (até %d): ", MAX_CIDADES);
    scanf("%d", &total_cidades);

    for (int i = 0; i < total_cidades; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("Código da cidade: ");
        scanf("%d", &cidades[i].codigo);
        printf("Estado: ");
        scanf("%s", cidades[i].estado);
        printf("Número de veículos de passeio (em 1992): ");
        scanf("%d", &cidades[i].veiculos);
        printf("Número de acidentes de trânsito com vítimas (em 1992): ");
        scanf("%d", &cidades[i].acidentes);
    }

    int maior_acidentes = -1;
    int menor_acidentes = -1;
    int indice_maior = -1;
    int indice_menor = -1;

    int total_veiculos = 0;
    int total_acidentes_RS = 0;
    int total_cidades_RS = 0;

    for (int i = 0; i < total_cidades; i++) {
        total_veiculos += cidades[i].veiculos;

        if (strcmp(cidades[i].estado, "RS") == 0) {
            total_acidentes_RS += cidades[i].acidentes;
            total_cidades_RS++;
        }

        if (maior_acidentes == -1 || cidades[i].acidentes > maior_acidentes) {
            maior_acidentes = cidades[i].acidentes;
            indice_maior = i;
        }

        if (menor_acidentes == -1 || cidades[i].acidentes < menor_acidentes) {
            menor_acidentes = cidades[i].acidentes;
            indice_menor = i;
        }
    }
    double media_veiculos = (double)total_veiculos / total_cidades;

    double media_acidentes_RS = (total_cidades_RS > 0) ? (double)total_acidentes_RS / total_cidades_RS : 0.0;

    printf("a) Maior índice de acidentes de trânsito: %d (Cidade %d, Estado: %s)\n", maior_acidentes, cidades[indice_maior].codigo, cidades[indice_maior].estado);
    printf("   Menor índice de acidentes de trânsito: %d (Cidade %d, Estado: %s)\n", menor_acidentes, cidades[indice_menor].codigo, cidades[indice_menor].estado);
    printf("b) Média de veículos nas cidades brasileiras: %.2lf\n", media_veiculos);
    printf("c) Média de acidentes com vítimas no Rio Grande do Sul: %.2lf\n", media_acidentes_RS);

    return 0;
}

