#include <stdio.h>

int main() {
	int pbo[20],inp,i, result;
	pbo[0]=0;
	pbo[1]=1;
	for(i=2; i<=20;i++){
		pbo[i]=pbo[i-1]+pbo[i-2];
	}
	
	scanf("%d",&inp);
	
	if(inp==0)
		printf("%d",pbo[0]);
	else if(inp==1)
		printf("%d",pbo[1]);
	else
		printf("%d",pbo[inp]);
	
    return 0;
}
//Àç±ÍÇÔ¼ö ¾îÂ¼°í~ ÀúÂ¼°í~ ³ª´Â ¸ô¶ó~~~ 
