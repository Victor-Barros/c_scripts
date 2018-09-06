#include <stdio.h>
#include <string.h>


int main() {

	char x[5]="as", *y="df";
	strcat(x,y);

	printf("Concatenacao de x e y: %s\n", x);

	return 0;
}
