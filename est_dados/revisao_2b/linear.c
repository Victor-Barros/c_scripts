#include <stdio.h>

int linear_search(int *vetor, int n, int elemento) {
	n--;
	while(n > 0) {
		if (vetor[n] == elemento) return n;
		n--;
	}
	return -1;
} 

int main() {
	int vetor[6]={1,-3,5,2,44,6};

	printf("%d\n",linear_search(vetor, 6, 44));
}