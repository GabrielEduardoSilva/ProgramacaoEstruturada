//
//  main.c
//  AtividadeAvaliativa3
//
//  Created by Gabriel Eduardo on 07/12/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um produto
struct Produto {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
    struct Produto* proximo;
};

// Função para inicializar a lista encadeada vazia
struct Produto* inicializarLista(void) {
    return NULL;
}

// Função para adicionar um novo produto à lista
struct Produto* adicionarProduto(struct Produto* lista, int codigo, const char* descricao, int quantidade, float valor) {
    struct Produto* novoProduto = (struct Produto*)malloc(sizeof(struct Produto));
    if (novoProduto != NULL) {
        novoProduto->codigo = codigo;
        strcpy(novoProduto->descricao, descricao);
        novoProduto->quantidade = quantidade;
        novoProduto->valor = valor;
        novoProduto->proximo = lista;
        return novoProduto;
    } else {
        printf("Erro ao alocar memoria para o produto.\n");
        return lista;
    }
}

// Função para percorrer a lista e imprimir um relatório de produtos
void relatorioProdutos(struct Produto* lista) {
    printf("\nRelatorio de Produtos:\n");
    while (lista != NULL) {
        printf("Codigo: %d\nDescricao: %s\nQuantidade: %d\nValor: R$ %.2f\n\n",
               lista->codigo, lista->descricao, lista->quantidade, lista->valor);
        lista = lista->proximo;
    }
}

// Função para pesquisar um produto pelo código
void buscarProduto(struct Produto* lista, int codigo) {
    while (lista != NULL) {
        if (lista->codigo == codigo) {
            printf("\nInformacoes do Produto:\n");
            printf("Codigo: %d\nDescricao: %s\nQuantidade: %d\nValor: R$ %.2f\n\n",
                   lista->codigo, lista->descricao, lista->quantidade, lista->valor);
            return;
        }
        lista = lista->proximo;
    }

    printf("Produto com codigo %d nao encontrado.\n", codigo);
}

// Função para remover um produto do estoque
struct Produto* removerProduto(struct Produto* lista, int codigo) {
    struct Produto* atual = lista;
    struct Produto* anterior = NULL;

    while (atual != NULL) {
        if (atual->codigo == codigo) {
            if (anterior == NULL) {
                // Remover o primeiro elemento da lista
                struct Produto* proximo = atual->proximo;
                free(atual);
                return proximo;
            } else {
                // Remover um elemento no meio ou no final da lista
                anterior->proximo = atual->proximo;
                free(atual);
                return lista;
            }
        }
        anterior = atual;
        atual = atual->proximo;
    }

    printf("Produto com codigo %d nao encontrado.\n", codigo);
    return lista;
}

// Função para liberar a memória alocada para a lista
void liberarLista(struct Produto* lista) {
    while (lista != NULL) {
        struct Produto* temp = lista;
        lista = lista->proximo;
        free(temp);
    }
}

int main(void) {
    struct Produto* estoque = inicializarLista();
    int opcao, codigo, quantidade;
    float valor;
    char descricao[50];

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Produto\n");
        printf("2. Consultar Produtos\n");
        printf("3. Buscar Produto\n");
        printf("4. Remover Produto\n");
        printf("5. Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Informe o codigo do produto: ");
                scanf("%d", &codigo);

                printf("Informe a descricao do produto: ");
                scanf(" %[^\n]s", descricao);

                printf("Informe a quantidade do produto: ");
                scanf("%d", &quantidade);

                printf("Informe o valor do produto: ");
                scanf("%f", &valor);

                // Adicionar o produto ao estoque
                estoque = adicionarProduto(estoque, codigo, descricao, quantidade, valor);
                printf("Produto adicionado com sucesso.\n");
                break;

            case 2:
                // Imprimir relatório de produtos
                relatorioProdutos(estoque);
                break;
                
            case 3:
                printf("Informe o codigo do produto a ser buscado: ");
                scanf("%d", &codigo);

                // Buscar e imprimir as informações do produto
                buscarProduto(estoque, codigo);
                break;

            case 4:
                printf("Informe o codigo do produto a ser removido: ");
                scanf("%d", &codigo);

                // Remover o produto do estoque
                estoque = removerProduto(estoque, codigo);
                break;

            case 5:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 5);

    // Liberar a memória alocada para a lista
    liberarLista(estoque);

    return 0;
}

