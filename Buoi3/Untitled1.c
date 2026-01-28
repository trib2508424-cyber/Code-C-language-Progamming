#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,delta,x1,x2;
	scanf ("%f %f %f",&a,&b,&c);
	if (a==0){
		printf("Khong phai phuong trinh bac 2");
	}else {	
		delta = b*b - 4*a*c;
		if (delta == 0)	{
			x1 = -b/(2*a);
			printf("Phuong trinh co 1 nghiem kep: x1 = x2 = %0.2f",x1);
		}else if(delta > 0){
			x1 = (-b-sqrt(delta))/(2*a);
			x2 = (-b+sqrt(delta))/2*a;
			printf("Phuong trinh co 2 nghiem phan biet la:\nx1 = %.02f\nx2= %.02f",x1,x2);
		}else {
			printf("Phuong trinh vo nghiem");
		}
	}
	return 0;
}


