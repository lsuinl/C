#include<stdio.h>
#include<ctype.h>
//함수 toupper 사용(#include<stype.h>필요) = 소문자를 대문자로 바꾸어줌 
int main(void){
	char suin[1000001], result;
	int abc[26]={0}, i, max=0;
	
	scanf("%s", suin);
	
	for(i=0;suin[i]!='\0';i++){
		abc[toupper(suin[i])-65]++; //suin[i]값을 대문자화 하고, 숫자로 저장해서 카운트 
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
