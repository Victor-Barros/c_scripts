#include <stdio.h>
#include <string.h>


void func1(char*, int ,int); 

void func2(char*, int, int, char*);

int main() {
	char string[256], buffer[256];
	int i,j;

	printf("Digite uma string: \n");
	if (fgets(buffer, 255,stdin)) sscanf(buffer, "%[ a-zA-Z0-9/.,-]", string);

	printf("Digite os dois indices do segmento (separados por um espaco): \n");
	if (fgets(buffer, 255, stdin)) sscanf(buffer, "%d %d", &i,&j);

	if (i > j || i < 0 || j > strlen(string)) {
		printf("Invalido\n");
		return 0;
	}

	char res[j-i+2];
	func2(string, i, j, res);
	printf("Nova string (f2): \"%s\"\n", res);
	printf("String original: \"%s\"\n", string);
	func1(string, i, j);
	printf("String modificada (f1): \"%s\"\n", string);

	return 0;
}

void func1(char *string, int i, int j) { // retorna segmento sem alocar mais espaco
	int k;

	for (k=0;k<=(j-i);k++) {
		*(string+k) = *(string+i+k);
	}
	*(string+k) = '\0';
}

void func2(char *string, int i, int j, char *res) {
	int k;

	for (k=0;k<=(j-i);k++) {
		*(res+k) = *(string+i+k);
	}
	*(res+k) = '\0';
}

