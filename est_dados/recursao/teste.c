
#include <stdio.h>

long int fatorial1(long int i) {
	if (i <= 1) return 1;
	else return i*fatorial1(i-1);
}

long int fatorial2(int i) {
	long int soma=1;
	while (i>0) {
		soma = soma*i;
		i--;
	}
	return soma;
}

long int fatorial3(int i) {
	long int soma = 1;

	for (int j=1;j<=i;j++) {
		soma = soma*j;
	}
	return soma;
}

int main() {
	
	printf("Primeira f: %ld\n", fatorial1(20));
	printf("Segunda f: %ld\n", fatorial2(20));
	printf("Terceira f: %ld\n", fatorial3(20));

	return 0;
}