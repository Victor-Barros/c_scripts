#include <stdio.h>

int main(void) {
	int n1, n2, *p1=&n1, *p2=&n2;

	scanf("%d", &n1);
	scanf("%d", &n2);

	*p2 = *p1 - n1;

	printf("%d, %d\n", n1, n2);
	return 0;
}
