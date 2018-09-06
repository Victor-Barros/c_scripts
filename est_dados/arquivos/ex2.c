#include <stdio.h>
#include <string.h>

int main() {
	FILE *arquivo, *arquivo2;
	char resposta[256]="", buffer[50];

	if (!(arquivo=fopen("arq1.txt","r")) || !(arquivo2=fopen("arq2.txt", "w"))) return 0;

	while (fscanf(arquivo, "%s", buffer) > 0) {
		if (buffer[0] == 'H') strcat(resposta, "\n");
		else strcat(resposta, " ");
		strcat(resposta, buffer);
	}
	fprintf(arquivo2, "%s\n", resposta);

	fclose(arquivo);
	fclose(arquivo2);
	return 0;
}