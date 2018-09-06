#include <stdio.h>

//declaracao das funcoes:
int ex1(char*);
int ex2(int);
int ex3(int*, int);
int ex4(int);
int ex5(int);
int ex6(int, int);
int ex7(int, int);

int main() {
	//testes:
	
	//exercicio 1
	/*
	char teste[] = "cccarro";
	printf("Numero de chars: %d\n", ex1(teste));
	*/
	
	//exercicio 2
	/*
	printf("Soma de 1 a n: %d\n", ex2(5));
	*/
	
	//exercicio 3
	/*
	int teste[] = {1,2,3,1};
	printf("Resposta: %d\n", ex3(teste, 4));
	*/
	
	//exercicio 4
	/*
	printf("Soma: %d\n", ex4(12345));
	*/
	
	//exercicio 5
	/*
	printf("Reverso: %d\n", ex5(1234));
	*/
	
	//exercicio 6
	/*
	ex6(1,7);
	*/
	
	//exercicio 7
	/*
	printf("MDC: %d\n", ex7(10,15));
	*/
	
	return 0;
}

int ex1(char string[]) { //exercicio 1 - contar chars em uma string
	int cont = 0; //contador

	if (string[0] == '\0') return 0; //testa se chegou no final da string (caso base)

	else if (string[0] == 'c') cont++ ; //conta se encoutrou o caractere

	cont += ex1(string+1); //realiza o mesmo, para a string sem o primeiro caractere (parte recursiva)

	return cont; //retorna a contagem
}

int ex2(int num) { //exercicio 2 - somar de 1 a n

	if (num < 1) return 0; //considerando intervalo fechado no 1 (caso base)

	else return num + ex2(num-1); //somando com numero menor (parte recursiva)
}

int ex3(int vetor[], int tamanho) { //exercicio 3 - verificar se vetor eh palindromo

	if (tamanho <= 1) return 1; //final do vetor (caso base)

	else if (vetor[0] != vetor[tamanho-1]) return 0; //retorna falso se indices opostos do vetor sao diferentes (caso base)

	return ex3(vetor+1, tamanho-2); //reduz o vetor pela esquerda e ignora os indices da direita (parte recursiva)
}

int ex4(int num) { //exercicio 4 - soma dos digitos de um inteiro

	if (num < 10) return num; //se o numero eh menor que 10, a soma eh o proprio numero (caso base)

	else return (num%10)+ex4(num/10); //soma o valor do ultimo digito do numero, que eh resto da divisao por 10 (parte recursiva)
}

int ex5(int num) { //exercicio 5 - reverte um inteiro
	int rev = 0, mult = 1; //variaveis do numero reverso e multiplicador

	while ((num/(mult*10)) > 0) mult = mult*10; //calcula a ordem de magnitude do numero para servir como multiplicador

	if (num < 10) return num; //se o numero eh menor que 10, a soma eh o proprio numero (caso base)

	else rev += (num%10)*mult+ex5(num/10); //soma o valor do ultimo digito do numero, multiplicado pela ordem do mesmo(parte recursiva)

	return rev; //retorna o numero revertido
}

int ex6(int num1, int num2) { //exercicio 6 - escreve os valores entre num1 e num2 em ordem decrescente

	if (num1 > num2) return 0; //retorna 0 se o valor do primeiro eh maior que o segundo (caso base)
	
	else printf("%d\n", num2); //mostra o numero na tela

	ex6(num1, num2-1); //executa o mesmo para num2 menor (parte recursiva)
	
	return 0; //retorna 0, mas a funcao poderia ser void
}

int ex7(int num1, int num2) { //exercicio 7 - encontra o mdc de dois numeros
	int resto = num1%num2; //calcula o resto

	if (resto == 0) return num2; //o segundo num ja eh o mdc (caso base)

	else if (resto == 1) return 1; //1 eh o unico fator comum (caso base)

	return ex7(num2, resto); //faz o mesmo para o segundo numero e o resto (parte recursiva)
}
