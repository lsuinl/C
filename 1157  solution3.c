#include<stdio.h>
#include<ctype.h>
//�Լ� toupper ���(#include<stype.h>�ʿ�) = �ҹ��ڸ� �빮�ڷ� �ٲپ��� 
int main(void){
	char suin[1000001], result;
	int abc[26]={0}, i, max=0;
	
	scanf("%s", suin);
	
	for(i=0;suin[i]!='\0';i++){
		abc[toupper(suin[i])-65]++; //suin[i]���� �빮��ȭ �ϰ�, ���ڷ� �����ؼ� ī��Ʈ 
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
