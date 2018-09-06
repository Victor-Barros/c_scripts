#include <stdio.h>
#include <math.h> //obs: compilar com -lm

#define size 10 //quantidade de bits do numero binario

//funcoes para os menus
void optdec();
void optbin();

//funcoes de conversao
void dectobin(int, int*);
int bintodec(int*);

//limpa o buffer do scanf
void flush_buffer();

int main() {
	int opt, continuar=1;

	while (continuar) {
		printf("------------------MENU------------------\n1. Converter um nro DECIMAL para BINARIO\n2. Converter um nro BINARIO para DECIMAL\n3. Sair\n----------------------------------------\n>");
		scanf("%d", &opt);
		flush_buffer();

		switch (opt) {
			case 1: {optdec(); break;}
			case 2: {optbin(); break;}
			case 3: {continuar=0; break;}
			default: printf("Invalido!\n");
		}
		if (continuar) flush_buffer();
	}

	return 0;
}

void optdec() { //menu decimal para binario
	int num, res[size];
	
	printf("\nDigite o nro decimal a ser convertido:\n>");
	scanf("%d", &num);

	if (num <= 1023 && num >= 0) {
		dectobin(num, res);
		printf("Numero em binario: ");
		for (int i=0;i<size;i++) {
			printf("%d", res[i]);
		}
		printf("\n\n");
	} else printf("Overflow!\n");
}

void optbin() { //menu binario para decimal
	int num[size], res, continuar=1;
	
	printf("\nDigite o nro binario de %d bits a ser convertido:\n>", size);
	for (int i=0;i<size;i++) {
		scanf("%1d", num+i);
		if (num[i] != 0 && num[i] != 1) {
			printf("Invalido!\n");
			continuar=0;
			break;
		}	
	} 
	
	if (continuar) {
		res = bintodec(num);
		printf("Numero em decimal: %d\n\n", res);
	}
}

void dectobin(int num, int *res) { //algoritmo de conversao decimal para binario
	for (int i=size-1;i>=0;i--) { //metodo do resto
		res[i] = num%2;
		num = num/2;
	}
}

int bintodec(int *num) { //algoritmo de conversao binario para decimal
	int res = 0;

	for (int i=0;i<size;i++) {
		res += num[i]*pow(2,(size-1)-i); //construcao do numero atraves das potencias de 2
	}
	return res;
}

void flush_buffer() { //se livra de quaisquer caracteres que estejam presos no buffer
	while (getchar() != '\n');
}

