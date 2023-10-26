//
//  5.c
//  Atividade12-Funcoes
//
//  Created by Gabriel Eduardo on 26/10/23.
//

#include <stdio.h>
#include <time.h>

void calcularIdade(int diaNascimento, int mesNascimento, int anoNascimento) {
    
    time_t tempoAtual;
    struct tm *dataAtual;
    time(&tempoAtual);
    dataAtual = localtime(&tempoAtual);

    int idadeAnos = dataAtual->tm_year + 1900 - anoNascimento;

    int idadeMeses = dataAtual->tm_mon + 1 - mesNascimento;

    if (idadeMeses < 0) {
        idadeAnos--;
        idadeMeses += 12;
    }

    int idadeDias = dataAtual->tm_mday - diaNascimento;

    if (idadeDias < 0) {
        idadeMeses--;
        if (idadeMeses < 0) {
            idadeAnos--;
            idadeMeses += 12;
        }
        int ultimoDiaDoMesAnterior;
        if (dataAtual->tm_mon == 0) { // Janeiro
            dataAtual->tm_mon = 11; // Dezembro
            dataAtual->tm_year--;
        } else {
            dataAtual->tm_mon--;
        }
        ultimoDiaDoMesAnterior = 31 - dataAtual->tm_mday;
        idadeDias += ultimoDiaDoMesAnterior;
    }

    printf("Idade: %d anos, %d meses, %d dias\n", idadeAnos, idadeMeses, idadeDias);
}

int main(void) {
    int diaNascimento, mesNascimento, anoNascimento;

    diaNascimento = 30;
    mesNascimento = 6;
    anoNascimento = 2005;

    calcularIdade(diaNascimento, mesNascimento, anoNascimento);

    return 0;
}

