#include<stdio.h>
//https://blog.naver.com/jyjh0501/222622868557
//https://blog.naver.com/ceja_crescent/222535064799
//https://blog.naver.com/wnsah1008/221317930837 (모르는 코드 있음 공부해봐야댐) 

int main(void) {
	char suin[1000000], result; //suin:글자담을공간, result=가장많은문자 
	int abc[26]={0,}, max=0; //abc:각 개수 세는 공간 
	
	scanf("%s", suin);
	
	for(int i=0; suin[i] != "\0"; i++){
		for(char j='A'; j<='Z';j++){
			if(j==suin[i]){
				abc[j-65]++; //A의 아스키코드는 65 
			}
		}
		for(char z='a'; z<='z';z++){
			if(z==suin[i]){
				abc[j-97]++; //a의 아스키값은 97 
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
