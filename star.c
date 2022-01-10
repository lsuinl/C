#include <stdio.h>

int main(void) {
	int c, i,j,p;
	scanf("%d", &c);
	for(i=1;i<=c;i++){
		for(j=c-i;j>0;j--)
			printf(" ");
		for(p=1;p<=i;p++)
			printf("*");
		printf("\n");
	}
}


