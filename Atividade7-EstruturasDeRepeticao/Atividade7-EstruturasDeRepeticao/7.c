//
//  7.c
//  Atividade7-EstruturasDeRepeticao
//
//  Created by Gabriel Eduardo on 11/09/23.
//

// Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada habitante:
// a) sexo (m e f);
//b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));
//c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));
//d) idade em anos.
//e) valor do salário.
//Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos somente as opções ‘m’ e ‘f’; para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade, apenas valores entre 10 e 100 anos, inclusive estes e para o salário, não aceitar valores negativos.
//Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1.
//Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos

#include <stdio.h>

int main(void) {
    char sexo, olhos, cabelos;
    int idade;
    float salario;
    int totalHabitantes = 0;
    int totalFemininoCastanhosCastanhos = 0;

    printf("Bem-vindo à pesquisa de características físicas!\n");

    while (1) {
        // Leitura dos dados do habitante
        printf("\nInforme os dados do habitante (ou idade -1 para encerrar):\n");
        printf("Sexo (m ou f): ");
        scanf(" %c", &sexo);

        if (sexo == 'm' || sexo == 'f') {
            printf("Cor dos olhos (a, v, c ou p): ");
            scanf(" %c", &olhos);

            printf("Cor dos cabelos (l, c, p ou r): ");
            scanf(" %c", &cabelos);

            printf("Idade (entre 10 e 100 anos): ");
            scanf("%d", &idade);

            printf("Salário (não negativo): ");
            scanf("%f", &salario);

            if (idade == -1) {
                break; // Encerra a pesquisa quando a idade for -1
            }

            if (idade >= 18 && idade <= 35 && sexo == 'f' && olhos == 'c' && cabelos == 'c' && salario >= 0) {
                totalFemininoCastanhosCastanhos++;
            }

            if (idade >= 10 && idade <= 100 && salario >= 0) {
                totalHabitantes++;
            }
        } else {
            printf("Sexo inválido. Digite 'm' para masculino ou 'f' para feminino.\n");
        }
    }

    if (totalHabitantes > 0) {
        float porcentagem = (float)totalFemininoCastanhosCastanhos / totalHabitantes * 100;
        printf("Porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos, olhos castanhos e cabelos castanhos: %.2f%%\n", porcentagem);
    } else {
        printf("Nenhum habitante registrado.\n");
    }

    return 0;
}

