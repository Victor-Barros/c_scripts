#include <stdio.h>

int fibo(int k);

int main() {
	for (int i=0;i<15;i++) {
		printf("%d ", fibo(i));
	}
	printf("\n");
	return 0;
}

int fibo(int k) {
	if (k<=1) return k;
	else return fibo(k-1)+fibo(k-2);
}
