#include <stdio.h>

int main() {

long double *pival;
long double ivar=27121975;

printf("Endereco: %p\n", pival);

printf("Valor: %Lf\n", ivar);

pival=&ivar;

printf("Encereco: %p\n", pival);

return 0;
}

