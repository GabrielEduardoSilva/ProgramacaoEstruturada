//
//  main.c
//  Atividade13-Cadastro
//
//  Created by Gabriel Eduardo on 18/11/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USUARIOS 1000

// Estrutura para armazenar dados do usuário
struct Usuario {
    int id;
    char nome[50];
    char email[50];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
};

// Protótipos de funções
void incluirUsuario(struct Usuario usuarios[], int *contador);
void editarUsuario(struct Usuario usuarios[], int contador);
void excluirUsuario(struct Usuario usuarios[], int *contador);
void buscarUsuarioPorEmail(struct Usuario usuarios[], int contador);
void imprimirUsuarios(struct Usuario usuarios[], int contador);

int main(void) {
    struct Usuario usuarios[MAX_USUARIOS];
    int contador = 0;
    char opcao;

    do {
        printf("\nOpcoes:\n");
        printf("1. Incluir Usuario\n");
        printf("2. Editar Usuario\n");
        printf("3. Excluir Usuario\n");
        printf("4. Buscar Usuario por Email\n");
        printf("5. Imprimir Usuarios\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                incluirUsuario(usuarios, &contador);
                break;
            case '2':
                editarUsuario(usuarios, contador);
                break;
            case '3':
                excluirUsuario(usuarios, &contador);
                break;
            case '4':
                buscarUsuarioPorEmail(usuarios, contador);
                break;
            case '5':
                imprimirUsuarios(usuarios, contador);
                break;
            case '6':
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != '6');

    return 0;
}

// Função para gerar um ID aleatório para o usuário
int gerarID(void) {
    return rand();
}

// Função para incluir um usuário
void incluirUsuario(struct Usuario usuarios[], int *contador) {
    if (*contador < MAX_USUARIOS) {
        struct Usuario novoUsuario;

        novoUsuario.id = gerarID();
        
        // Limpar o buffer de entrada antes de usar fgets
        while (getchar() != '\n');

        printf("Nome completo: ");
        fgets(novoUsuario.nome, sizeof(novoUsuario.nome), stdin);
        novoUsuario.nome[strcspn(novoUsuario.nome, "\n")] = '\0';  // Remover o caractere de nova linha

        do {
            printf("Email: ");
            fgets(novoUsuario.email, sizeof(novoUsuario.email), stdin);
            novoUsuario.email[strcspn(novoUsuario.email, "\n")] = '\0';  // Remover o caractere de nova linha

            // Validar se o e-mail não contém '@'
            if (strchr(novoUsuario.email, '@') == NULL) {
                printf("Erro: O e-mail deve conter o caractere '@'. Tente novamente.\n");
            }
        } while (strchr(novoUsuario.email, '@') == NULL);

        // Validação do campo sexo
        do {
            printf("Sexo (Feminino/Masculino/Indiferente): ");
            scanf("%s", novoUsuario.sexo);
        } while (strcmp(novoUsuario.sexo, "Feminino") != 0 &&
                 strcmp(novoUsuario.sexo, "Masculino") != 0 &&
                 strcmp(novoUsuario.sexo, "Indiferente") != 0);

        // Limpar o buffer de entrada antes de usar fgets
        while (getchar() != '\n');
        
        printf("Endereco: ");
        fgets(novoUsuario.endereco, sizeof(novoUsuario.endereco), stdin);
        novoUsuario.endereco[strcspn(novoUsuario.endereco, "\n")] = '\0';  // Remover o caractere de nova linha

        // Validação do campo altura
        do {
            printf("Altura (entre 1 e 2 m): ");
            scanf("%lf", &novoUsuario.altura);
        } while (novoUsuario.altura < 1.0 || novoUsuario.altura > 2.0);

        // Validação do campo vacina
        do {
            printf("Vacina (1 para sim, 0 para nao): ");
            scanf("%d", &novoUsuario.vacina);
        } while (novoUsuario.vacina != 0 && novoUsuario.vacina != 1);

        usuarios[*contador] = novoUsuario;
        (*contador)++;

        printf("Usuario incluido com sucesso!\n");
    } else {
        printf("Limite de usuarios atingido.\n");
    }
}

// Função para editar um usuário
void editarUsuario(struct Usuario usuarios[], int contador) {
    if (contador > 0) {
        int id;
        printf("Informe o ID do usuario a ser editado: ");
        scanf("%d", &id);

        for (int i = 0; i < contador; i++) {
            if (usuarios[i].id == id) {
                printf("Informe os novos dados para o usuario %d:\n", id);
                
                // Limpar o buffer de entrada antes de usar fgets
                while (getchar() != '\n');

                printf("Nome completo: ");
                fgets(usuarios[i].nome, sizeof(usuarios[i].nome), stdin);
                usuarios[i].nome[strcspn(usuarios[i].nome, "\n")] = '\0';  // Remover o caractere de nova linha
                

                do {
                    printf("Email: ");
                    fgets(usuarios[i].email, sizeof(usuarios[i].email), stdin);
                    usuarios[i].email[strcspn(usuarios[i].email, "\n")] = '\0';  // Remover o caractere de nova linha

                    // Validar se o e-mail não contém '@'
                    if (strchr(usuarios[i].email, '@') == NULL) {
                        printf("Erro: O e-mail deve conter o caractere '@'. Tente novamente.\n");
                    }
                } while (strchr(usuarios[i].email, '@') == NULL);

                // Validação do campo sexo
                do {
                    printf("Sexo (Feminino/Masculino/Indiferente): ");
                    scanf("%s", usuarios[i].sexo);
                } while (strcmp(usuarios[i].sexo, "Feminino") != 0 &&
                         strcmp(usuarios[i].sexo, "Masculino") != 0 &&
                         strcmp(usuarios[i].sexo, "Indiferente") != 0);

                printf("Endereco: ");
                fgets(usuarios[i].endereco, sizeof(usuarios[i].endereco), stdin);
                usuarios[i].endereco[strcspn(usuarios[i].endereco, "\n")] = '\0';  // Remover o caractere de nova linha

                // Validação do campo altura
                do {
                    printf("Altura (entre 1 e 2 m): ");
                    scanf("%lf", &usuarios[i].altura);
                } while (usuarios[i].altura < 1.0 || usuarios[i].altura > 2.0);

                // Validação do campo vacina
                do {
                    printf("Vacina (1 para sim, 0 para nao): ");
                    scanf("%d", &usuarios[i].vacina);
                } while (usuarios[i].vacina != 0 && usuarios[i].vacina != 1);

                printf("Usuario editado com sucesso!\n");
                return;
            }
        }
        printf("Usuario com ID %d nao encontrado.\n", id);
    } else {
        printf("Nenhum usuario cadastrado para editar.\n");
    }
}

// Função para excluir um usuário
void excluirUsuario(struct Usuario usuarios[], int *contador) {
    if (*contador > 0) {
        int id;
        printf("Informe o ID do usuario a ser excluido: ");
        scanf("%d", &id);

        for (int i = 0; i < *contador; i++) {
            if (usuarios[i].id == id) {
                // Desloca os elementos à frente do encontrado para preencher o espaço
                for (int j = i; j < *contador - 1; j++) {
                    usuarios[j] = usuarios[j + 1];
                }

                (*contador)--;
                printf("Usuario com ID %d excluido com sucesso!\n", id);
                return;
            }
        }
        printf("Usuario com ID %d nao encontrado.\n", id);
    } else {
        printf("Nenhum usuario cadastrado para excluir.\n");
    }
}

// Função para buscar um usuário por email
void buscarUsuarioPorEmail(struct Usuario usuarios[], int contador) {
    if (contador > 0) {
        char email[50];
        printf("Informe o email do usuario a ser buscado: ");
        scanf("%s", email);

        for (int i = 0; i < contador; i++) {
            if (strcmp(usuarios[i].email, email) == 0) {
                printf("\nUsuario Encontrado:\n");
                printf("ID: %d\n", usuarios[i].id);
                printf("Nome completo: %s\n", usuarios[i].nome);
                printf("Email: %s\n", usuarios[i].email);
                printf("Sexo: %s\n", usuarios[i].sexo);
                printf("Endereco: %s\n", usuarios[i].endereco);
                printf("Altura: %.2lf m\n", usuarios[i].altura);
                printf("Vacina: %s\n", (usuarios[i].vacina == 1) ? "Sim" : "Nao");
                return;
            }
        }
        printf("Usuario com email %s nao encontrado.\n", email);
    } else {
        printf("Nenhum usuario cadastrado para buscar.\n");
    }
}

// Função para imprimir todos os usuários cadastrados
void imprimirUsuarios(struct Usuario usuarios[], int contador) {
    if (contador > 0) {
        printf("\nLista de Usuarios Cadastrados:\n");
        for (int i = 0; i < contador; i++) {
            printf("\nUsuario %d:\n", usuarios[i].id);
            printf("Nome completo: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf m\n", usuarios[i].altura);
            printf("Vacina: %s\n", (usuarios[i].vacina == 1) ? "Sim" : "Nao");
        }
    } else {
        printf("Nenhum usuario cadastrado para imprimir.\n");
    }
}

