#include<stdio.h> 

int main(void) 
{
	char suin[1000001], j,z, result; //suin:���ڴ�������, result=���帹������ 
	int abc[26]={0}, max=0, i; //abc:�� ���� ���� ���� 
	
	scanf("%s", suin);
	
	for(i=0; suin[i] != '\0'; i++){
		for(j='A'; j<='Z';j++){
			if(j==suin[i]){
				abc[j-65]++; //A�� �ƽ�Ű�ڵ�� 65 
			}
		}
		for(z='a'; z<='z';z++){
			if(z==suin[i]){
				abc[z-97]++; //a�� �ƽ�Ű���� 97 
			}
		}
		
	}
	
	for(i=0;i<26;i++){
		if(abc[i]> max){ //���� ���� ���ĺ� ã�Ƽ� result�� ���� 
			max=abc[i];
			result=i+65;
		}
		else if(abc[i]==max){ //���� ���� ���ĺ��� ������ �ΰ� �̻��ϰ�� ? ���� 
			result='?';
		}
	}
	printf("%c\n", result);
	
}
