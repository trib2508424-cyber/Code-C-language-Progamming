#include<stdio.h>
int main(){
		int n, sum = 0;
	while(1){
		scanf("%d",&n);
		sum +=n;
			if(n==0){
				break;
			}		
	}printf("%d",sum);
	return 0;
}



















//#include<stdio.h>
//int main(){
//	int n,i;
//	scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		printf(" %d",i);
//		if (i%10 == 0) printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int n,i;
//	scanf("%d",&n);
//	int sum = 1;
//	for (i=1;i<=n;i++){
//	sum +=i;
//}
//printf("%d",sum );
//}

//#include<stdio.h>
//int main(){
//	float x;
//	int n,i;
//	scanf("%f %d",&x,&n);
//	double result=1;
//	if (x>=-5.0 && x<=5.0 && n>5.0 && n<=10.0){
//			for (i=1;i<=n;i++){
//				result *=x;
//			}
//			printf ("%.02lf",result);	
//	}else {
//		printf("Phep tinh khong hop le!");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main(){
//	int i,n,sum=0;
//	scanf("%d",&n);
//	for ( i=1;i<=n;i++){		
//	if (i%2==0)
//	sum +=i;
//	else sum -=i;
//	}
//	printf("%d",sum);
//}


//#include<stdio.h>
//int main(){
//	int i,n;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		if (i % 2 ==0)
//		printf("%d ",i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main(){
//	int n,i,nt=0;
//	scanf("%d",&n);
//	if(n<2){
//		printf("%d Khong phai la so nguyen to",n);
//	}else {
//		for(i=2;i<=n/2;i++){
//			if(n%i==0){
//				nt++;
//				break;
//			}
//		}
//		if (nt==0) printf("%d la so nguyen to",n);
//		else printf("%d khong phai la so nguyen to",n);
//	}
//	return 0;
//}
