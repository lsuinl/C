#include<stdio.h>
#include<ctype.h>

int main(void){
	char suin[1000001], result;
	int abc[26]={0}, i, max=0;
	
	scanf("%s", suin);
	
	for(i=0;suin[i]!='\0';i++){
		if(islower(suin[i])){
			suin[i]-=32;
		}
	}
	
	for(i=0; suin[i]!='\0';i++){
		abc[suin[i]-65]++;
	}
	
	for(i=0; i<26; i++){
		if(abc[i]>max){
			max=abc[i];
			result=i+65;
		}
		else if(abc[i]==max){
			result='?';
		}
	}
	printf("%c", result);
}
