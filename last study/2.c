#include <stdio.h>

void Sel(char *ptr, int num){
	printf("resl : %c \n", ptr[num]);
}

void main(void){
	char arr[] = {'A','B','C','D'};
	
	printf("I am Son-Ryul Nam \n");
	Sel(arr, 1);
}
