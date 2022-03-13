#include <stdio.h>

typedef struct{
	int xpos;
	int ypos;
}POINT;

typedef struct data{
	int * rad;
	POINT * cen;
}CIRCLE;

void chparam(CIRCLE *pDd){
	*(pDd->rad)=80;
	pDd->cen->ypos=60;
}

void main(void){
	int radius =10;
	POINT center={20,30}; //center.xpos=20, center.ypos=30
	CIRCLE D ={&radius, &center};  //D.rad=10, D.cen.xpos=20, D.cen.ypos=30 
	CIRCLE * pD = &D;
	
	chparam(pD);
	printf("I am Son-Ryul Nam \n");
	printf("res1 : %d \n", radius);
	printf("res2 : %d \n", center.ypos);
}
