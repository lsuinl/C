#include<stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){

	int choice;
	int random;

	int score=0;

	for(int i=1; i==1; i++){
		//����
		srand(time(NULL));
		random = rand() % 6 + 1;
		
		//�Է�
		printf("%dȸ�� Ȧ¦�� �Է����ּ���. (Ȧ:1, ¦:0, ���� ����: 7): ",i);
		scanf("%d", &choice);
		
		if(choice==7){
			printf("������ ����Ǿ����ϴ�. \n");
			break;
		} 
		
		
		//���
		if(random % 2==choice){ //�¾ҽ��ϴ�. 
			score++;
			printf("player: %d, random: %d ... ���: �¾ҽ��ϴ�. ����: %d \n", choice, random, score);
		} 
		else{ //Ʋ�Ƚ��ϴ�. 
			printf("player: %d, random: %d ... ���: Ʋ�Ƚ��ϴ�. \n", choice, random); 
		}
	}
}



