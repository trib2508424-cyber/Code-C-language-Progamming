#include <stdio.h>
int main(){
	int h,m,s1,s2;
	scanf("%d",&s1);
	if((s1>=0)&&(s1<=86399)){
		 h = s1 / 3600;
    	 m = (s1 % 3600) / 60;
         s2 = s1 % 60;
    printf("%.02d:%.02d%:%.02d",h,m,s2);
	}
	return 0;
}
