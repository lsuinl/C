#include <stdio.h>

int main(void) {
	int number, max= -1000001, min=1000001;
	scanf("%d", &number); //정수의 개수 받기 
	int suin[number]; //받은 개수만큼의 배열 생성 
	
	
	for(int i=1;i<=number;i++){ //지정된 정수의 개수만큼 반복 
		scanf("%d", &suin[i]); //배열의 i번째에 정수를 저장 
		if(max<suin[i]){ //입력된 정수가 저장된 최댓값보다 높을 경우 최댓값에 정수 저장 
			max=suin[i];
		}
		if(min>suin[i]){ //입력된 정수가 저장된 최솟값보다 낮을 경우 최솟값에 정수 저장
			min=suin[i];
		}
	}
	
	printf("%d %d", min, max); //출
}


