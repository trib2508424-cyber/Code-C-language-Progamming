#include<stdio.h>

 int main(){
	int thang,nam;
	scanf("%d %d",&thang,&nam);
	if (thang<1 || thang>12){
		printf("Thang khong hop le!");
	}else{
		switch (thang){
			case 4: case 6: case 9: case 11:
				printf("Thang %d nam %d co 31 ngay",thang,nam);
			break;
			case 2:
					if ((nam % 400 ==0 )|| (nam % 4 ==0 && nam % 100!=0)) {
						printf ("Thang %d nam %d co 29 ngay",thang,nam);
					}else{
						printf ("Thang %d nam %d co 28 Ngay",thang,nam);
					}break;
			default:
			printf("Thang %d %d co 31 ngay",thang,nam);	
		}
	}
	
	return 0;
}
