#include <stdio.h>

int fibo(int n) {
	if (n == 0) return 0;
	if (n == 1 || n == 2) return 1;
	else return fibo(n-1)+fibo(n-2);
}

int iter_fibo(int n) {
	if (n == 0) return 0;
	int atual=1, ultimo=0, soma=0;
	for (int i=1;i<n;i++) {
		soma = ultimo + atual;
		ultimo = atual;
		atual = soma;
	}
	return atual;
}

int main() {
	for (int i=0;i<10;i++) {
		printf("%d ", iter_fibo(i));
	}
	printf("\n");

	return 0;
}