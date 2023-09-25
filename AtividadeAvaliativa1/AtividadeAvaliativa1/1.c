//
//  1.c
//  AtividadeAvaliativa1
//
//  Created by Gabriel Eduardo on 25/09/23.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    double x, resultado;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    if (x * x - 16 >= 0) {
        resultado = (5 * x + 3) / sqrt(x * x - 16);
        printf("f(x) = %lf\n", resultado);
    } else {
        printf("A raiz quadrada do denominador não é real. Impossível calcular f(x).\n");
    }

    return 0;
}

