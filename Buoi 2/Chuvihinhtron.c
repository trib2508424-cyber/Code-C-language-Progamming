#include<stdio.h>
int main(){
	float r,chuvi,pi;
	pi=3.14;
	scanf("%f",&r);
	if((r>=0)&&(r<=100)){
		chuvi=2*pi*r;
		printf("Chu vi hinh tron la: %.2f\n",chuvi);
	}else{
		printf("Phep tinh khong hop le!");
	}
	return 0;
}
