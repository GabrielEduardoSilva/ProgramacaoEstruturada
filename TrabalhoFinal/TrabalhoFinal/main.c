//
//  main.c
//  TrabalhoFinal
//
//  Created by Gabriel Eduardo on 05/12/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Estrutura para representar um veículo
struct Veiculo {
    char proprietario[50];
    char combustivel[10];
    char modelo[50];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[8];
    struct Veiculo* proximo;
};

void limparBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função para criar um novo veículo
struct Veiculo* criarVeiculo(void) {
    struct Veiculo* novoVeiculo = (struct Veiculo*)malloc(sizeof(struct Veiculo));
    if (novoVeiculo != NULL) {
        printf("Proprietario: ");
        fgets(novoVeiculo->proprietario, sizeof(novoVeiculo->proprietario), stdin);
        novoVeiculo->proprietario[strcspn(novoVeiculo->proprietario, "\n")] = '\0';
        

        printf("Combustivel (alcool, diesel ou gasolina): ");
        fgets(novoVeiculo->combustivel, sizeof(novoVeiculo->combustivel), stdin);
        novoVeiculo->combustivel[strcspn(novoVeiculo->combustivel, "\n")] = '\0';

        printf("Modelo: ");
        fgets(novoVeiculo->modelo, sizeof(novoVeiculo->modelo), stdin);
        novoVeiculo->modelo[strcspn(novoVeiculo->modelo, "\n")] = '\0';
        

        printf("Cor: ");
        fgets(novoVeiculo->cor, sizeof(novoVeiculo->cor), stdin);
        novoVeiculo->cor[strcspn(novoVeiculo->cor, "\n")] = '\0';
        

        printf("Chassi: ");
        fgets(novoVeiculo->chassi, sizeof(novoVeiculo->chassi), stdin);
        novoVeiculo->chassi[strcspn(novoVeiculo->chassi, "\n")] = '\0';

        printf("Ano: ");
        scanf("%d", &novoVeiculo->ano);
        
        limparBuffer();

        printf("Placa: ");
        fgets(novoVeiculo->placa, sizeof(novoVeiculo->placa), stdin);
        novoVeiculo->placa[strcspn(novoVeiculo->placa, "\n")] = '\0';
        
        limparBuffer();
    }
    return novoVeiculo;
}

// Função para adicionar um veículo à lista
void adicionarVeiculo(struct Veiculo** lista, struct Veiculo* novoVeiculo) {
    if (*lista == NULL) {
        *lista = novoVeiculo;
    } else {
        struct Veiculo* atual = *lista;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novoVeiculo;
    }
}

// a. Listar proprietários de carros do ano de 2010 ou posterior e movidos a diesel
void listarProprietariosDiesel2010OuPosterior(struct Veiculo* lista) {
    printf("\nProprietarios de carros do ano de 2010 ou posterior e movidos a diesel:\n");
    while (lista != NULL) {
        if (lista->ano >= 2010 && strcmp(lista->combustivel, "diesel") == 0) {
            printf("%s\n", lista->proprietario);
        }
        lista = lista->proximo;
    }
}

// b. Listar placas que começam com J e terminam com 0, 2, 4 ou 7, e seus respectivos proprietários
void listarPlacasJ_0_2_4_7(struct Veiculo* lista) {
    printf("\nPlacas que comecam com J e terminam com 0, 2, 4 ou 7 e seus respectivos proprietarios:\n");
    while (lista != NULL) {
        if (lista->placa[0] == 'J' && (lista->placa[6] == '0' || lista->placa[6] == '2' || lista->placa[6] == '4' || lista->placa[6] == '7')) {
            printf("%s - %s\n", lista->placa, lista->proprietario);
        }
        lista = lista->proximo;
    }
}

// c. Listar modelo e cor dos veículos com placas que têm a segunda letra como vogal e soma dos dígitos é par
void listarModeloCorPlacasVogalSomaPar(struct Veiculo* lista) {
    printf("\nModelo e cor dos veiculos com placas que tem a segunda letra como vogal e soma dos digitos e par:\n");
    while (lista != NULL) {
        if (strchr("aeiouAEIOU", lista->placa[1]) != NULL) {
            int somaDigitos = 0;
            for (int i = 0; i < 7; i++) {
                if (isdigit(lista->placa[i])) {
                    somaDigitos += lista->placa[i] - '0';
                }
            }
            if (somaDigitos % 2 == 0) {
                printf("%s - %s, %s\n", lista->placa, lista->modelo, lista->cor);
            }
        }
        lista = lista->proximo;
    }
}

// d. Trocar o proprietário com base no chassi para carros cujas placas não possuem dígitos iguais a zero
void trocarProprietarioSemDigitoZero(struct Veiculo** lista) {
    char chassi[20];
    char novoProprietario[50];

    // Solicitar o chassi do veículo
    printf("Informe o chassi do veiculo: ");
    fgets(chassi, sizeof(chassi), stdin);
    chassi[strcspn(chassi, "\n")] = '\0';

    struct Veiculo* atual = *lista;
    while (atual != NULL) {
        // Verifica se a placa não possui dígitos iguais a zero
        if (strchr(atual->placa, '0') == NULL) {
            if (strcmp(atual->chassi, chassi) == 0) {
                // Solicitar o novo proprietário
                printf("Informe o novo proprietario: ");
                fgets(novoProprietario, sizeof(novoProprietario), stdin);
                novoProprietario[strcspn(novoProprietario, "\n")] = '\0';

                // Efetuar a troca do proprietário
                strcpy(atual->proprietario, novoProprietario);
                printf("Proprietario alterado com sucesso!\n");
                return;
            }
        }
        atual = atual->proximo;
    }
    printf("Nenhum veiculo encontrado com chassi %s ou placa sem digitos iguais a zero.\n", chassi);
}

// Função para liberar a memória alocada para a lista
void liberarLista(struct Veiculo* lista) {
    while (lista != NULL) {
        struct Veiculo* temp = lista;
        lista = lista->proximo;
        free(temp);
    }
}

// Função principal para teste
int main(void) {
    struct Veiculo* lista = NULL;
    
    adicionarVeiculo(&lista, criarVeiculo());
    adicionarVeiculo(&lista, criarVeiculo());
    adicionarVeiculo(&lista, criarVeiculo());

    // Testando as funções
    listarProprietariosDiesel2010OuPosterior(lista);
    listarPlacasJ_0_2_4_7(lista);
    listarModeloCorPlacasVogalSomaPar(lista);

    // Alterar o proprietário do veículo com base no chassi
    trocarProprietarioSemDigitoZero(&lista);

    // Liberar a memória alocada para a lista
    liberarLista(lista);

    return 0;
}

