#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int sum = 0;
	for ( i =1 ; i <=n; i++){
		sum +=i * i;
	}
	printf("%d",sum);
	return 0;
}



















//int main (){
//	int n;
//	scanf("%d",&n);
//	int ans = 0;
//	while (n !=0){
//		++ans;
//		n /=10;
//	}
//	printf("%d",ans);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//float my_abs(float (x)){
//return fabsf(x);	// fabsf ham tri tuyet doi cua C
//}
//
//
//int main(){
//	printf("%.2f\n", my_abs(5.67));
//	printf("%.2f\n", my_abs(-35.1));
//	printf("%.2f\n", my_abs(0.00));
//	return 0;
//}
















//#include<stdio.h>
//int main(){
//	int n , a;
//	scanf("%d",&n);
//	while ( n!=0){
//		printf("%d", n % 10);  
//    n/=10;
//	}
//	return 0;
//}
















//#include<stdio.h>
//int main(){
//	int n;
//	scanf ("%d",&n);
//	int ans = 0;
//	while ( n!=0){
//		++ans;
//		n /=10;
//	}
//	printf ("So luong chu so: %d",ans);
//	printf("\nGia tri cua n sau vao lap la: %d",n);
//}

