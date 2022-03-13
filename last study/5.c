#include <stdio.h>

typedef struct data
{
	int * pD;
	int num;
}set;

void main(void){
	int data[]={1,3,5,7};
	set s1;
	
	s1.pD =data;//=&data[0]
	s1.num=sizeof(data)/sizeof(int);//==4
	
	printf("I am Son-Ryul Nam \n");
	printf("res1 : %d \n", s1.pD+2);
	printf("res1 : %d \n", s1.pD);
}
