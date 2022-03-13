#include <stdio.h>

int num = 10;

void function(int *val1){
	num+=30;
	*val1+=40;
}

void main(void){
	int val=20;
	function(&val);
	printf("I am Son-Ryul Nam \n");
	printf("res1 : %d \n", num);
	printf("res2 : %d \n", val);
}
