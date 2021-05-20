#include <stdio.h> 
int nhapso();
int max(int a, int b);
void main(){
	printf("Nhap so ");
	int num1 = nhapso(), num2 = nhapso(), num3 = nhapso(), num4 = nhapso();
	int Ans = max(max(max(num1, num2), num3), num4);
	printf("So lon nhat la %d", Ans);	
}
int nhapso(int temp){
	scanf("%d", &temp);
	return temp;
}
int max(int a, int b){
	return (a > b ? a : b);
}
