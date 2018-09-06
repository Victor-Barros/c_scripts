#include <stdio.h>

int main() {

int a,b,c,d;

printf("Digite 3 valores inteiros: \n");
scanf("%d %d %d", &a, &b, &c);

if (a>b && a>c) d=a;
else {
	if (b>c) d=b;
	else d=c;
}

printf("Maior valor: %d\n", d);

return 0;
}
