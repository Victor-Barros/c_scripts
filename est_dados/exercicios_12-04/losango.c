#include <stdio.h>
#include <stdlib.h>

struct Losango{
	float dist_maior;
	float dist_menor;
};


int main() {

	struct Losango losango;

	printf("Descreva um losango:\n");
	
	printf("Distancia maior: ");
	scanf("%f", &losango.dist_maior);

	printf("Distancia menor: ");
	scanf("%f", &losango.dist_menor);

	printf("\nArea do losango = %f\n", losango.dist_maior*losango.dist_menor*0.5);

	return 0;
}