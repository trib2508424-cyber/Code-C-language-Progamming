#include<stdio.h>
//#include<math.h>
int main(){
	float r,dientich,pi;
	pi=3,14;
	scanf("%f",&r);
	if((r>=0)&&(r<=100)){
		dientich=3.14*r*r;
		printf("Dien tich hinh tron la:  %.2f\n", dientich);
	}else{
		printf("Phep tinh khong hop le!");
	}
	return 0;
}
