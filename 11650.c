#include <stdio.h>
#include <stdlib.h>
//https://blog.naver.com/erasedjjang/222435342359

typedef struct {
	int x;
	int y;
}Cdnate;

int compare(Cdnate *a, Cdnate *b){
	if(a->x >b->x) return 1;
	else if(a->x < b->x) return -1;
	else{
		if(a->y > b->y) return 1;
		else if(a->y < b->y) return -1;
		else return 0;
	}
}

int main(){
	int n,i; 
	scanf("%d", &n);
	
	Cdnate *arr = (Cdnate*)malloc(sizeof(Cdnate) *n);
	
	for(i=0; i<n; i++){
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	
	qsort(arr, n, sizeof(Cdnate), compare);
	
	for(i=0;i<n;i++){
		printf("%d %d\n", arr[i].x, arr[i].y);
	}
	return 0;
}
