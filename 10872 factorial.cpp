#include <stdio.h>

int main(void) {
	int number, result=1;
	
	scanf("%d",&number);
	for(int i=1; i<=number; i++){
		result*=i;
	}
	
	printf("%d", result);
}
