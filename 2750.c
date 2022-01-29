#include <stdio.h>

int main() {
	int number, suin[1000]={0}, z,i,j;

	scanf("%d", &number);

	for (i = 0; i < number; i++) {
		scanf("%d", &suin[i]);
    }
    
		for (i = 0; i < number; i++) {
            for(j=0;j<number-1;j++){
				if (suin[j+1] < suin[j]) {  
					z = suin[j+1];
					suin[j+1] = suin[j];
					suin[j] = z;
			}
            }
		}

	for (i = 0; i < number; i++) {
		printf("%d\n", suin[i]);
	}
    return 0;
}

