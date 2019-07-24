#include <stdio.h>

/**
 * componentes de una función recursiva
 *
 * CASO BASE: aquella situación que, pueda resolverse directamente
 * entregando un resultadi sin necesidad de hacer llamadas recursivas
 *
 * CASO RECURSIVO: Situación que para poder resolverse. necesita resolve
 * una instancia más pequeña de si misma
 */

/**
 * FACTORIAL
 */

int factorial (int x)
{
    if (x == 0)
        return 1;
    else
        return x*factorial(x - 1);
}

int fibonacci (int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}

int main ()
{
    int f = factorial(3);
    int c = fibona(50);
    printf("%c", f);
    return 0;
}
