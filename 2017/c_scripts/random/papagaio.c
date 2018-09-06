#include <stdio.h> 

void inverte(char*, char*);
void mintomai(char*, char*);

int main(void) {

	char string[] = "papagaio";
	char inv[32], mai[32];

	inverte(string, inv);
	mintomai(string, mai);

	printf("%s\n", inv);
	printf("%s\n", mai);


}

void inverte(char string[], char inv[]) {
	int cont=0;

	while (string[cont] != '\0') {
		cont++;
	}

	for (int i=0;i<=(cont-1);i++) {
		inv[i] = string[(cont-1)-i];
	}

	inv[cont] = '\0';
}

void mintomai(char string[], char mai[]) {
	int cont=0;

	while(string[cont] != '\0') {
		mai[cont] = string[cont]-32;
		cont++;
	}
}