#include "fatorial.c"
#include <stdio.h>
#include <stdlib.h>

int fatorial(int numero);

int main(){
    int resultado;
    resultado = fatorial(5);

    assert(resultado == 120);
    printf("teste compluido com sucesso");

    return 0;
}