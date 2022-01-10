#include <stdio.h>

int main(void) {
	int h, m;
	scanf("%d %d", &h, &m);
	if(h==0 && m<45)
		h=23;
	else if(m<45)
		h--;
	m=(m+15)%60;
	printf("%d %d",h,m); 
	}

