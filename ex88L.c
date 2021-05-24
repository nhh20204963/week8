#include <stdio.h>

int main(){
	int n, i;
	int fac = 1;
	printf("nhap n = ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		fac *= i;
	}
	printf("Giai thua cua %d la %d", n, fac);
}
