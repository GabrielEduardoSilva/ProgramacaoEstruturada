//
//  10.c
//  Atividade5-OperadoresRelacionais
//
//  Created by Gabriel Eduardo on 06/09/23.
//

// Calcule as raízes da equação de 2º grau

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o coeficiente 'a' (diferente de zero): ");
    scanf("%f", &a);

    if (a == 0) {
        printf("Isso não é uma equação de segundo grau (a = 0).\n");
        return 1;
    }

    printf("Digite o coeficiente 'b': ");
    scanf("%f", &b);

    printf("Digite o coeficiente 'c': ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Não existe raiz real (delta < 0).\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raízes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}

