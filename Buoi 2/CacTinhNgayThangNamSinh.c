#include<stdio.h>

int main(){
	int ngay,thang,namsinh,namhientai,tuoi;
	scanf("%d %d %d %d",&ngay,&thang,&namsinh,&namhientai);
	tuoi=namhientai-namsinh;
	printf("Ban sinh ngay %.02d thang %.02d nam %.04d. Nam nay, ban %.02d tuoi.",ngay,thang,namsinh,tuoi);
    return 0;
}

