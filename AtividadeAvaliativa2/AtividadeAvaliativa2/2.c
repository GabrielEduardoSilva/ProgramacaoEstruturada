//
//  2.c
//  AtividadeAvaliativa2
//
//  Created by Gabriel Eduardo on 16/11/23.
//

#include <stdio.h>

int main(void) {
    // Definindo o salário mínimo nacional
    const float salarioMinimo = 1400.0;
    
    char sexo;
    float salario;
    
    char continuar;
    
    // Loop para cada assalariado
    do {
        // Solicita o sexo do assalariado
        printf("\nInforme o sexo (M/F): ");
        scanf(" %c", &sexo);
        
        // Solicita o salário do assalariado
        printf("Informe o salario (maior que R$1,00): ");
        scanf("%f", &salario);
        
        // Validação do salário
        if (salario <= 1.0) {
            printf("Erro: Salario deve ser maior que R$1,00. Tente novamente.\n");
            continue; // Volta ao início do loop
        }
        
        // Apresenta os dados para cada assalariado
        printf("\nDados do Assalariado:\n");
        printf("Salario: R$%.2f; ", salario);
        
        // Classificação em relação ao salário mínimo
        printf("Classificacao: ");
        if (salario > salarioMinimo) {
            printf("Acima do salario minimo; ");
        } else if (salario == salarioMinimo) {
            printf("Igual ao salario minimo; ");
        } else {
            printf("Abaixo do salario minimo; ");
        }
        
        // Apresenta o sexo por extenso
        printf("Sexo: ");
        if (sexo == 'M' || sexo == 'm') {
            printf("Masculino\n");
        } else if (sexo == 'F' || sexo == 'f') {
            printf("Feminino\n");
        } else {
            printf("Desconhecido\n");
        }
        
        // Pergunta ao usuário se deseja continuar
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
        
    } while (continuar == 'S' || continuar == 's');

    return 0;
}

