#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
}POINT;

void Show(POINT * ptr, int idx){
	printf("I am Son-Ryul Nam \n");
	printf("res1 : %d \n", ptr[idx].ypos);
	printf("res2 : %d \n", (*(ptr+idx)).ypos);
}

void main(void){
	POINT pos[]={ {1,2},{3,4},{5,6}};
	Show(pos,2);
}
