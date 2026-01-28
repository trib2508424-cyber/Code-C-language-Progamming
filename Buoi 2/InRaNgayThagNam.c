#include<stdio.h>
int main(){
    int d,m,y;
    scanf("%d%*c%d%*c%d%*c",&d,&m,&y);
    printf("%.02d %.02d %.04d",d,m,y);
    return 0;
}
