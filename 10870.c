#include <stdio.h>

int main() {
	int pbo[20],inp,i, result;
	pbo[0]=0;
	pbo[1]=1;
	for(i=2; i<=20;i++){
		pbo[i]=pbo[i-1]+pbo[i-2];
	}
	
	scanf("%d",&inp);
	printf("%d",pbo[inp]);
	
    return 0;
}
