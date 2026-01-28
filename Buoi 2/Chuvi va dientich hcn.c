#include<stdio.h>
int main(){
	float dai,rong;
	int chuvi,dientich;
	printf("Nhap chieu dai:  ");
	scanf("%f" , &dai);
	printf("Nhap chieu rong:  ");
	scanf("%f" , &rong);
	if (dai>0 && rong>0) {
	chuvi = (dai+rong)*2;
	dientich = dai*rong;
	printf("Chu vi hinh chu nhat la: %d\n" , chuvi);
	printf("Dien tich hinh chu nhat là: %d\n" , dientich);
}else{
	printf("Phep tinh khong hop le!\n");
	printf("Chieu dai va chieu rong phai lon hon 0!\n");
}
     return 0;
		 
}
