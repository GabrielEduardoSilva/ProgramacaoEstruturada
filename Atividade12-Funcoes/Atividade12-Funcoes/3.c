//
//  3.c
//  Atividade12-Funcoes
//
//  Created by Gabriel Eduardo on 26/10/23.
//

#include <stdio.h>

void trocarMatriz(int A[10][10]) {
    int temp;

    // Troca a linha 2 com a linha 8
    for (int j = 0; j < 10; j++) {
        temp = A[2][j];
        A[2][j] = A[8][j];
        A[8][j] = temp;
    }

    // Troca a coluna 4 com a coluna 10
    for (int i = 0; i < 10; i++) {
        temp = A[i][3];  // Coluna 4 (índice 3)
        A[i][3] = A[i][9]; // Coluna 10 (índice 9)
        A[i][9] = temp;
    }

    // Troca a diagonal principal com a diagonal secundária
    for (int i = 0; i < 10; i++) {
        temp = A[i][i];
        A[i][i] = A[i][9 - i];
        A[i][9 - i] = temp;
    }

    // Troca a linha 5 com a coluna 10
    for (int j = 0; j < 10; j++) {
        temp = A[4][j]; // Linha 5 (índice 4)
        A[4][j] = A[j][9]; // Coluna 10 (índice 9)
        A[j][9] = temp;
    }
}

int main(void) {
    int matriz[10][10] = {
        { 1,  2,  3,  4,  5,  6,  7,  8,  9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
        {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
        {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
    };

    trocarMatriz(matriz);

    // Imprima a matriz alterada
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

