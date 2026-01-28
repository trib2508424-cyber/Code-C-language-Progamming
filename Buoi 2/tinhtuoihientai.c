#include<stdio.h>
#include<time.h>
int main(){
	int ngay,thang,namSinh,namHientai,tuoi;
	scanf("%d%*c %d%*c %d",&ngay,&thang,&namSinh);
	
	struct tm ts;
	time_t now;
	int year;
	
	now = time(0);
	ts = *localtime(&now);
	namHientai = ts.tm_year + 1900;
	
	tuoi= namHientai-namSinh;
	printf("Ban sinh ngay %.02d thang %.02d nam %0.4d. Nam nay, ban %0.2d tuoi.",ngay,thang,namSinh,tuoi);
	return 0;
}
