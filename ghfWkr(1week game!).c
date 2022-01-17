#include<stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){

	int choice;
	int random;

	int score=0;

	for(int i=1; i==1; i++){
		//난수
		srand(time(NULL));
		random = rand() % 6 + 1;
		
		//입력
		printf("%d회차 홀짝을 입력해주세요. (홀:1, 짝:0, 게임 종료: 7): ",i);
		scanf("%d", &choice);
		
		if(choice==7){
			printf("게임이 종료되었습니다. \n");
			break;
		} 
		
		
		//결과
		if(random % 2==choice){ //맞았습니다. 
			score++;
			printf("player: %d, random: %d ... 결과: 맞았습니다. 점수: %d \n", choice, random, score);
		} 
		else{ //틀렸습니다. 
			printf("player: %d, random: %d ... 결과: 틀렸습니다. \n", choice, random); 
		}
	}
}



