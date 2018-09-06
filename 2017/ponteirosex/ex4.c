#include <stdio.h>

int main(void) {
	char c = 'z';
	char *p1=&c, *p2=NULL;

	p2 = p1;

	printf("Caractere: %c\n", *p2);
	return 0;
}