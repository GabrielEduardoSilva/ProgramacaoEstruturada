//
//  2.c
//  Atividade8-Repeticao
//
//  Created by Gabriel Eduardo on 08/10/23.
//

#include <stdio.h>

// Estrutura para representar as respostas dos moradores
struct RespostaMorador {
    char elevadorMaisFrequentado;
    char periodoMaisFrequentado;
};

int main(void) {
    int numMoradores = 50;
    struct RespostaMorador respostas[numMoradores];

    // Preencha o array com as respostas dos moradores (simulando dados de entrada)
    for (int i = 0; i < numMoradores; i++) {
        printf("Morador %d:\n", i + 1);
        printf("Elevador mais frequente (A, B ou C): ");
        scanf(" %c", &respostas[i].elevadorMaisFrequentado);
        printf("Período mais frequente (M, V ou N): ");
        scanf(" %c", &respostas[i].periodoMaisFrequentado);
    }

    // Inicialize contadores para calcular as estatísticas
    int contadorElevadores[3] = {0}; // Contador para cada elevador (A, B, C)
    int contadorPeriodos[3] = {0};   // Contador para cada período (M, V, N)

    // Processar as respostas e atualizar os contadores
    for (int i = 0; i < numMoradores; i++) {
        switch (respostas[i].elevadorMaisFrequentado) {
            case 'A':
                contadorElevadores[0]++;
                break;
            case 'B':
                contadorElevadores[1]++;
                break;
            case 'C':
                contadorElevadores[2]++;
                break;
        }

        switch (respostas[i].periodoMaisFrequentado) {
            case 'M':
                contadorPeriodos[0]++;
                break;
            case 'V':
                contadorPeriodos[1]++;
                break;
            case 'N':
                contadorPeriodos[2]++;
                break;
        }
    }

    // Encontrar o período mais usado
    char periodoMaisUsado;
    if (contadorPeriodos[0] >= contadorPeriodos[1] && contadorPeriodos[0] >= contadorPeriodos[2]) {
        periodoMaisUsado = 'M';
    } else if (contadorPeriodos[1] >= contadorPeriodos[0] && contadorPeriodos[1] >= contadorPeriodos[2]) {
        periodoMaisUsado = 'V';
    } else {
        periodoMaisUsado = 'N';
    }

    // Encontrar o elevador mais frequentado
    char elevadorMaisFrequentado = '\0';
    int maxContadorElevador = contadorElevadores[0];
    for (int i = 1; i < 3; i++) {
        if (contadorElevadores[i] > maxContadorElevador) {
            maxContadorElevador = contadorElevadores[i];
            elevadorMaisFrequentado = 'A' + i; // Convertendo 0, 1, 2 para 'A', 'B', 'C'
        }
    }

    // Calcular a diferença percentual entre o mais usado e o menos usado
    int minContadorPeriodo = contadorPeriodos[0];
    for (int i = 1; i < 3; i++) {
        if (contadorPeriodos[i] < minContadorPeriodo) {
            minContadorPeriodo = contadorPeriodos[i];
        }
    }
    float diferencaPercentual = (float)(maxContadorElevador - minContadorPeriodo) / maxContadorElevador * 100.0;

    // Calcular a percentagem sobre o total de serviços prestados do elevador de média utilização
    int totalServicosPrestados = numMoradores;
    int elevadorMedioUtilizacao = 0;
    for (int i = 0; i < 3; i++) {
        if (contadorElevadores[i] == totalServicosPrestados / 3) {
            elevadorMedioUtilizacao = i;
            break;
        }
    }
    float percentagemMedioUtilizacao = (float)contadorElevadores[elevadorMedioUtilizacao] / totalServicosPrestados * 100.0;

    // Imprimir os resultados
    printf("\nResultados:\n");
    printf("Período mais usado: %c\n", periodoMaisUsado);
    printf("Elevador mais frequentado: %c\n", elevadorMaisFrequentado);
    printf("Diferença percentual entre o mais usado e o menos usado: %.2f%%\n", diferencaPercentual);
    printf("Percentagem sobre o total de serviços prestados do elevador de média utilização: %.2f%%\n", percentagemMedioUtilizacao);

    return 0;
}



