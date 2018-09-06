#include <stdio.h>
#include <string.h>

int main() {
	char string[65];
	int chars[255]={0};
	int max=0, index=0;

	printf("Digite uma string(max 64 chars): ");
	fgets(string, 64, stdin);

	for (int i=0;i<strlen(string);i++) {
		chars[string[i]]++;
		if (chars[string[i]]>max) {
			max=chars[string[i]];
			index=i;
		}
	}

	printf("Carectere de maxima ocorrencia: \'%c\', com %d ocorrencias.\n", string[index], chars[string[index]]);

	return 0;
}