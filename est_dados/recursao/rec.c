#include <stdio.h>

int cont=0;

int rec(int n, int m)
{
	cont++;
    if ((n==m) || (n
==0))
       return 1;
   else
      return rec(n-1,m)+rec(n-1,m+1);
}

int main() {

printf("%d\n",rec(5,3));
printf("%d\n", cont);

return 0;
}
