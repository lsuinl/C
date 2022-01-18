#include<stdio.h> 

int main(void) 
{
	char suin[1000001], j,z, result; //suin:글자담을공간, result=가장많은문자 
	int abc[26]={0}, max=0, i; //abc:각 개수 세는 공간 
	
	scanf("%s", suin);
	
	for(i=0; suin[i] != '\0'; i++){
		for(j='A'; j<='Z';j++){
			if(j==suin[i]){
				abc[j-65]++; //A의 아스키코드는 65 
			}
		}
		for(z='a'; z<='z';z++){
			if(z==suin[i]){
				abc[z-97]++; //a의 아스키값은 97 
			}
		}
		
	}
	
	for(i=0;i<26;i++){
		if(abc[i]> max){ //가장 많은 알파벳 찾아서 result에 저장 
			max=abc[i];
			result=i+65;
		}
		else if(abc[i]==max){ //가장 많은 알파벳의 개수가 두개 이상일경우 ? 저장 
			result='?';
		}
	}
	printf("%c\n", result);
	
}
