#include <stdio.h>

int main(void) {
	int number, max= -1000001, min=1000001;
	scanf("%d", &number); //������ ���� �ޱ� 
	int suin[number]; //���� ������ŭ�� �迭 ���� 
	
	
	for(int i=1;i<=number;i++){ //������ ������ ������ŭ �ݺ� 
		scanf("%d", &suin[i]); //�迭�� i��°�� ������ ���� 
		if(max<suin[i]){ //�Էµ� ������ ����� �ִ񰪺��� ���� ��� �ִ񰪿� ���� ���� 
			max=suin[i];
		}
		if(min>suin[i]){ //�Էµ� ������ ����� �ּڰ����� ���� ��� �ּڰ��� ���� ����
			min=suin[i];
		}
	}
	
	printf("%d %d", min, max); //��
}


