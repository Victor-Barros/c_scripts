#include <stdio.h>
#include <math.h>

#define n 10000000

int main() {
	int flag;
	for (long int i=2;i<=n;i++) {
		flag = 1;
		for (long int j=i-1;j>1;j--) {
			if (i%j==0) {
				flag = 0;
				break;
			}
		}
		if (flag) printf("%ld\n", i);
	}

	return 0;
}