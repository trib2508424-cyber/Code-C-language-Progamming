#include<stdio.h>
int main(){
    int h,m,s,thoigian;
    scanf("%dh %dm %ds", &h,&m,&s);
    thoigian=h*3600+m*60+s;
    printf("Thoi gian da nhap la: %d\n",thoigian);
	return 0;
}
