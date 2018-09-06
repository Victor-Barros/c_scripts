
#include <stdio.h>

int f_a_recursiva(int i)
{
    if (i > 1)
        return i + f_a_recursiva(i-1);
    else
        return 1;
}

int f_a_iterativa(int i)
{
	int soma=0;
	while(i>0) {
		soma += i;
		i--;
	}
	return soma;
}

int f_b_recursiva(int i)
{
   if (i==0)
        return 0;
   else if (i==1)
        return 1;
   else
        return f_b_recursiva(i-1)+f_b_recursiva(i-2);
}

int f_b_iterativa(int i)
{
	if (i==0) return 0;

	int atual=1, ultimo=0, temp;

	while(i>1) {
		temp = atual;
		atual = atual + ultimo;
		ultimo = temp;
		i--;
	}

	return atual;
}

int main() {
	//printf("%d\n",f_b_recursiva(6));

	return 0;
}
