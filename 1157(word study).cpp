#include<stdio.h>
//https://blog.naver.com/jyjh0501/222622868557
//https://blog.naver.com/ceja_crescent/222535064799
//https://blog.naver.com/wnsah1008/221317930837 (�𸣴� �ڵ� ���� �����غ��ߴ�) 

int main(void) {
	char suin[1000000], result; //suin:���ڴ�������, result=���帹������ 
	int abc[26]={0,}, max=0; //abc:�� ���� ���� ���� 
	
	scanf("%s", suin);
	
	for(int i=0; suin[i] != "\0"; i++){
		for(char j='A'; j<='Z';j++){
			if(j==suin[i]){
				abc[j-65]++; //A�� �ƽ�Ű�ڵ�� 65 
			}
		}
		for(char z='a'; z<='z';z++){
			if(z==suin[i]){
				abc[j-97]++; //a�� �ƽ�Ű���� 97 
			}
		}
		
	}
	
	for(int i=0;i<26;i++){
		if(abc[i]> max){
			max=abc[i];
			result=i+65;
		}
		else if(abc[i]==max){
			result='?';
		}
	}
	
}
