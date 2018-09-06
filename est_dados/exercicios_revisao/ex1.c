#include <stdio.h>

#define n 5

int main() {
	double area=0,base,altura;

	for (int i=0;i<n;i++) {
		printf("Digite a BASE e ALTURA do triangulo[%d]\n", i);
		scanf("%lf %lf", &base, &altura);
		area += base*altura;
	}

	printf("Soma de todas as areas: %lf\n", area);
}