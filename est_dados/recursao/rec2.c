#include <stdio.h>

int cont=0;

int rec(int n)
{
	cont++;
     if ((n >= 0) && (n <= 2))
          return n;
     else
          return rec(n-1)+rec(n-2)+rec(n-3);
}

int main() {

printf("%d\n",rec(6));
printf("%d\n", cont);

return 0;
}
