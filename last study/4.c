#include <stdio.h>
void func(int **pptr1, int **pptr2){
	**pptr1+=50;
	**pptr2+=50;
	int *a;
	a=*pptr1;
	*pptr1=*pptr2;
	*pptr2=a;
}

void main(void){
	int num1 =10, num2=20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2=&num2;

	func(&ptr1, &ptr2);
	printf("I am Son-Ryul Nam \n");
	printf("%d %d \n", num1, *ptr2);
	printf("%d %d \n", num2, *ptr1);
}

