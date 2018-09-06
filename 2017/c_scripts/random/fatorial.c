#include <stdio.h>

int main(void) {
	int op;
	double res = 1;

	printf("Digite o operando:\n>");
	scanf("%d", &op);
	
	for(int i=op;i>0;i--) {
		res = res*(i); 
	}

	printf("%i! = %g\n\n",op ,res);
	return 0;
}