//
//  main.c
//  Atividade1-Variaveis
//
//  Created by Gabriel Eduardo on 14/08/23.
//

/* Criar um algoritmos que apresente um cadastro de informações. O cadastro deverá conter os seguintes campos:
 
 a. Nome

 b. Idade

 c. Matricula

 e. Endereço

 f. Curso

 g. Período

 h. Disciplinas

 Apresentar as informações do cadastro.

 A apresentação deverá estar formatada adequadamente. */

#include <stdio.h>

// Definição da estrutura para armazenar as informações
struct Cadastro {
    char nome[50];
    int idade;
    char matricula[50];
    char endereco[100];
    char curso[50];
    char periodo[20];
    char disciplinas[100];
};

int main(void) {
    struct Cadastro aluno; // Declaração da variável do tipo Cadastro

    // Captura dos dados do aluno
    printf("Cadastro de Aluno\n");
    printf("Nome: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);

    printf("Idade: ");
    scanf("%d", &aluno.idade);

    printf("Matricula: ");
    fflush(stdin);
    fgets(aluno.matricula, sizeof(aluno.endereco), stdin);

    printf("Endereco: ");
    fflush(stdin);
    fgets(aluno.endereco, sizeof(aluno.endereco), stdin);
    

    printf("Curso: ");
    fgets(aluno.curso, sizeof(aluno.curso), stdin);

    printf("Periodo: ");
   
    fgets(aluno.periodo, sizeof(aluno.periodo), stdin);

    printf("Disciplinas: ");
    fgets(aluno.disciplinas, sizeof(aluno.disciplinas), stdin);

    // Apresentação das informações cadastradas
    printf("\n---Informacoes do Aluno---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Matricula: %s\n", aluno.matricula);
    printf("Endereco: %s\n", aluno.endereco);
    printf("Curso: %s\n", aluno.curso);
    printf("Periodo: %s\n", aluno.periodo);
    printf("Disciplinas: %s\n", aluno.disciplinas);

    return 0;
}
