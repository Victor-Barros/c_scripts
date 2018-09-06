#include <stdio.h>
void main() {
int vet[] = {4,9,12};
int i,*ptr;
ptr = vet;
for(i = 0 ; i < 3 ; i++) {
printf("%d ",(*ptr)++);
}
}