#include<stdio.h>
#include<math.h>
void main(){
int option = 0;
int a = 0, r = 0, n = 0, i = 0, j = 0, k = 0;
int buffer = 0;
int ans = 0, ans2 = 0, ans3 =0, ans4 = 0;
int compare = 0;
int x [] = {0,1,2,3,4,5,6,7,8,9};
int y [] = {10,11,12,13,14,15,16,17,18,19};
int w [] = {20,21,22,23,24,25,26,27,28,29};
printf("Escolha a propriedade:\n 1 - Teorema;\n 2 - Somatório de uma constante;\n 3 - Somatório do produto de uma constante por uma variável;\n 4 - Somatório de uma soma ou de uma subtração;\n 5 - Somatório duplo;\n");
scanf("%d", &option);
switch (option) {
	case 1:
		printf("Escolha um valor para: a, n e um r.\n");
		scanf("%d %d %d",&a,&n,&r);
		if(r!=1){
			printf("Fazendo pelo modo do somatório\n");
			for(i = 0; i<=n; i++)
				{buffer = a*pow(r,i);
				 ans = ans + buffer;}
			printf("A resposta é: %d\n",ans);
			printf("Agora utilizando o teorema\n");
				compare = (((a*pow(r,n+1)) - a)/(r -1));
			printf("A resposta pelo teorema é: %d\n",compare);}			
		else{
			printf("Fazendo pelo modo do somatório\n");
			for(i=0;i<=n;i++)
				{buffer = a*pow(r,j);
				 ans = ans + buffer;}
			printf("A resposta é: %d\n",ans);
			printf("Agora utilizando o teorema\n");
				compare = (n + 1)*a;
			printf("A resposta pelo teorema é: %d\n",compare);}
	break;
	case 2:
		printf("Escolha um valor para: k e um n.\n");
		scanf("%d %d",&k,&n);
		for(i = 1; i<=n; i++)
			{buffer = k;
			 ans = ans + buffer;}
		printf("A resposta é: %d\n",ans);				
	break;
	case 3:
		printf("Essa propriedade é aplicada para um somatório de uma sequência que nesse programa já foi definida\n"); 
		for(i = 0; i<=9; i++)
			{printf("%d ", x[i]);}
		printf("\n");
		printf("Escolha um valor para k:\n");
		scanf("%d",&k);
		for(i = 0; i<=9; i++)
			{buffer = k*x[i]; 
			 ans = ans + buffer;}
		printf("A resposta é: %d\n",ans);
	break;
	case 4:
		printf("Essa propriedade é aplicada para um somatório de uma sequência que nesse programa já foi definida\n");
		for(i = 0; i<=9; i++)
			{printf("%d ", x[i]);}
		printf("\n");
		for(i = 0; i<=9; i++)
			{printf("%d ", y[i]);}
		printf("\n");
		for(i = 0; i<=9; i++)
			{printf("%d ", w[i]);}
		printf("\n");
		for(i = 0; i<=9; i++)
			{buffer = x[i]; 
			 ans2 = ans2 + buffer;}
		for(i = 0; i<=9; i++)
			{buffer = y[i]; 
			 ans3 = ans3 + buffer;}
		for(i = 0; i<=9; i++)
			{buffer = w[i]; 
			 ans4 = ans4 + buffer;}
		ans = ans2 + ans3 - ans4;
		printf("A resposta é: %d\n",ans);	 
	break;
	case 5:
		printf("Escolha um valor para n:\n");
		scanf("%d",&n);
		for(i=1; i<=n; i++)
			{buffer = i;
			 ans2 = ans2 + buffer;}
		for(j=1; j<=n; j++)
			{buffer = j;
			 ans3 = ans3 + buffer;}	  
		ans = ans2*ans3;
		printf("A resposta é: %d\n",ans);
	break; 
	}
}
