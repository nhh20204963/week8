#include <stdio.h>

int main(){
	int i, n;
	printf("So nguyen = ");
	scanf("%d", &n);
	do{
		printf("So nguyen nho hon %d la: %d\n", n, i);
	}while(++i < n);
}
