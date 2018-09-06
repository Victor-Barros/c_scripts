#include <stdio.h>
#include <string.h>

int main() {

	char string1[21], string2[21], string1_rev[21];

	printf("Digite uma string(max 20): ");
	scanf("%20s", string1);

	printf("Tamanho da string: %ld.\n", strlen(string1));

	printf("Digite outra string(max 20): ");
	scanf("%20s", string2);

	if (!strcmp(string1, string2)) printf("As strings sao iguais.\n");
	else printf("As strings sao diferentes.\n");

	int j=0; //A reversao precisa ocorrer aqui para nao ser alterada pela concatenacao.
        for (int i=strlen(string1)-1;i>=0;i--) string1_rev[j++] = string1[i];

        string1_rev[j]='\0';


	printf("Concatenacao das strings: %s\n", strcat(string1, string2));

	printf("String reversa: %s\n", string1_rev);

	return 0;
}
