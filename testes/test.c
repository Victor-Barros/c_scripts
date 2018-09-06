#include <stdio.h>
#include <stdlib.h>


int main() {

	int m[3][3]={{1,2,-3},{2,-1,2},{3,2,4}};

	int m2[3][3]={{1,0,0},{0,2,0},{0,0,1}};

	int mres[3][3];

	int det=0;

	det+=m[0][0]*(m[1][1]*m[2][2]-m[2][1]*m[1][2]);
	det-=m[0][1]*(m[1][0]*m[2][2]-m[2][0]*m[1][2]);
	det+=m[0][2]*(m[1][0]*m[2][1]-m[2][0]*m[1][1]);

	printf("%d\n", det);

	printf("Matriz: \n");

	for (int i=0;i<3;i++) {
		printf("[");
		for (int j=0;j<3;j++){
			mres[i][j]=m[i][0]*m2[0][j]+m[i][1]*m2[1][j]+m[i][2]*m2[2][j];
			printf(" %d ", mres[i][j]);
		}
		printf("]\n");
	}


	return 0;
}
