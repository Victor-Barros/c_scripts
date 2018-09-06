#include <stdio.h>
#include <stdlib.h>

void ler(int*, int);
void mostrar(int*, int, char*);

int main() {

	int n1, n2, *vet1, *vet2, *vetdiff, *vetint;

	printf("Digite o tamanho do vetor 1: ");
	scanf("%d", &n1);

	printf("Digite o tamanho do vetor 2: ");
	scanf("%d", &n2);

	vet1 = (int*)malloc(n1*sizeof(int));
	vet2 = (int*)malloc(n2*sizeof(int));
	vetdiff = (int*)malloc(n1*sizeof(int));
	vetint = (int*)malloc(n1*sizeof(int));

	ler(vet1,n1);
	ler(vet2,n2);

	int k=0,l=0,flag=0,skip=0;

	for (int i=0;i<n1;i++) {
		for (int j=0;j<n2;j++) {
			if (vet1[i] == vet2[j]) {flag=1; break;}
		}
		for (int j=0;j<k;j++) {
			if (vet1[i] == vetdiff[j]) {skip=1; break;}
		}
		for (int j=0;j<l;j++) {
			if (vet1[i] == vetint[j]) {skip=1; break;}
		}
		if (!flag&&!skip) {
			vetdiff[k] = vet1[i];
			k++;
		} else if (!skip){
			vetint[l] = vet1[i];
			l++;
		}
		flag=0;
		skip=0;
	}

	printf("\n\n");
	mostrar(vet1, n1, "Vetor 1");
	mostrar(vet2, n2, "Vetor 2");
	mostrar(vetdiff, k, "Vetor Diferenca");
	mostrar(vetint, l, "Vetor Interseccao");

	free(vet1);
	free(vet2);
	free(vetdiff);
	free(vetint);

	return 0;
}

void ler(int *vetor, int n) {
	printf("Digite os elementos inteiros do vetor:\n");
	for (int i=0;i<n;i++) {
		printf("[%d]: ", i);
		scanf("%d", vetor+i);
	}
}

void mostrar (int *vetor, int n, char *mensagem) {
	printf("%s: [", mensagem);
	for (int i=0;i<n;i++) {
		printf(" %d ", vetor[i]);
	}
	printf("]\n");
}