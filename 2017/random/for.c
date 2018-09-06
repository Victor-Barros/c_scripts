#include <stdio.h>
#include <math.h>

int main(void) {

	char Ch='\0';

	while(Ch != 'q') {
		printf("Digite: ");
		scanf("%c%*c", &Ch);
		//fflush(stdin);

	}
	return 0;
}