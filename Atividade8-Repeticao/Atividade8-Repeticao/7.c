//
//  7.c
//  Atividade8-Repeticao
//
//  Created by Gabriel Eduardo on 08/10/23.
//

#include <stdio.h>

int main(void) {
    int numPessoas = 10;
    int numHomens = 0, numMulheres = 0;
    float alturaHomens = 0, alturaMulheres = 0, alturaTotal = 0;
    float pesoHomens = 0, pesoMulheres = 0, pesoTotal = 0;

    for (int i = 0; i < numPessoas; i++) {
        char nome[100];
        char sexo;
        float altura, peso;

        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nome);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Altura (em metros): ");
        scanf("%f", &altura);
        printf("Peso (em kg): ");
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            numHomens++;
            alturaHomens += altura;
            pesoHomens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            numMulheres++;
            alturaMulheres += altura;
            pesoMulheres += peso;
        } else {
            printf("Sexo inválido. Use M ou F.\n");
            i--; // Reverta a iteração para que os dados da pessoa sejam inseridos novamente
            continue;
        }

        alturaTotal += altura;
        pesoTotal += peso;
    }

    // Calcular médias
    float alturaMediaHomens = numHomens > 0 ? alturaHomens / numHomens : 0;
    float alturaMediaMulheres = numMulheres > 0 ? alturaMulheres / numMulheres : 0;
    float alturaMediaGrupo = alturaTotal / numPessoas;
    float pesoMediaHomens = numHomens > 0 ? pesoHomens / numHomens : 0;
    float pesoMediaMulheres = numMulheres > 0 ? pesoMulheres / numMulheres : 0;
    float pesoMediaGrupo = pesoTotal / numPessoas;

    // Exibir resultados
    printf("\nResultados:\n");
    printf("Número de homens: %d\n", numHomens);
    printf("Número de mulheres: %d\n", numMulheres);
    printf("Altura média dos homens: %.2f metros\n", alturaMediaHomens);
    printf("Altura média das mulheres: %.2f metros\n", alturaMediaMulheres);
    printf("Altura média do grupo: %.2f metros\n", alturaMediaGrupo);
    printf("Peso médio dos homens: %.2f kg\n", pesoMediaHomens);
    printf("Peso médio das mulheres: %.2f kg\n", pesoMediaMulheres);
    printf("Peso médio do grupo: %.2f kg\n", pesoMediaGrupo);

    return 0;
}
