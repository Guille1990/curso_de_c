/**
 * Una linea de código es una operación
 */


/**
 * estructura if else
 * if (condicion) {
 *      // alpha operaciones
 * } else {
 *      // beta operaciones
 * }
 *
 * max{alpha, beta} + 1
 */

/**
 * estructura iterativa
 * ej: for
 *
 * for(i = 0; i < n; i++){
 *      // alpha operaciones
 * }
 *
 * la complejidad final es de n*alpha
 *
 * donde n es el número de iteraciones
 */

#include <stdio.h>

int forFunction () {
    int i, j = 0; // 1 operación
    for (i = 0; i < 20; i+=2) // 10 iterciones
    {
        int temp = i + 2;
        printf("iteration %d", j); // 3 operaciones

        j++;
    }

    // el calculo de las operaciones es: 1 + (10 * 3) = 31
    // 31
}

int main() {
    int booleanFlag;
    int x;

    if (1 == 1) {
        booleanFlag = 1;
        printf("condition is true\n"); // tres (3) operaciones
        x++;
    } else {
        booleanFlag = 0;
        printf("condition is false\n"); // cuatro (4) operaciones
        x--;
        return 0;
    }

    /**
     * max{3, 4} + 1 = 4 + 1 = 5;
     */

    return 0;
}
