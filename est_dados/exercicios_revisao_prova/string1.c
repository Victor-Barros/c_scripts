#include <stdio.h>
#include <string.h>

int main() {
	/*char s[64], c;

	scanf("%63[^\n]s", s);
	getchar();
	scanf("%c", &c);

	printf("Primeira ocorrência: %ld\n", strchr(s,c)-s);*/

	/*char s1[64], s2[64];

	scanf("%63[^\n]s", s1);
	getchar();
	scanf("%63[^\n]s", s2);

	printf("Primeira ocorrência: %ld\n", strstr(s1,s2)-s1);*/

	/*char s[64], s2[64];
	int i,j;

	scanf("%63[^\n]s", s);
	getchar();
	scanf("%d %d", &i, &j);

	strcpy(s2, &s[i]);
	s2[j-i+1]='\0';

	s[j+1]='\0';
	strcpy(s,&s[i]);

	printf("%s\n", s2);*/

	char s[64], t[64], *i=s;
	int count=0;

	scanf("%63[^\n]s", s);
	getchar();
	scanf("%63[^\n]s", t);

	while (i=strstr(i,t)) {
		count++;
		i++;
	}

	printf("Count: %d\n", count);

}