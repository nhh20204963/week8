#include <stdio.h>
int main(){
	float GK;
	float CK;
	float TS;
	float DIEM;
	printf("Diem GK = ");
	scanf("%f", &GK);
	printf("Diem CK = ");
	scanf("%f", &CK);
	printf("Trong so mon = ");
	scanf("%f", &TS);
	DIEM = GK * TS + CK * (1 - TS);
	while(GK >= 0 && GK <= 10 && CK >= 0 && CK <= 10 && TS > 0 && TS < 1){
		if(GK >= 3){
			if(CK >= 3){
				if(DIEM >= 4){
					printf("Mon nay co diem la %.2f\nDat", DIEM);
					return DIEM;
				}else{
					printf("Mon nay co diem la %.2f\nKhong dat", DIEM);
					return DIEM;
				}
			}else{
				printf("Mon nay khong dat");
				return 0;
			}
		}else{
			printf("Mon nay khong dat");
			return 0;
		}
	}
	return 0;
} 
