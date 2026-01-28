#include <iostream>
using namespace std;

int sum (int a, int b) {
	return a + b;
}

int subtract (int a, int b) {
	return a - b;
}

int multiply (int a, int b) {
	return a * b;
}

int devide (int a, int b) {
	return a / b;
}

int main () {
	int a = 2;
	int b = 1;
	
	while(1) {
		int choice;
		int a,b;
		cout<<"Calculator"<<endl;
		cout<<"1. +"<<endl;
		cout<<"2. -"<<endl;
		cout<<"3. *"<<endl;
		cout<<"4. /"<<endl;
		cout<<"0. exit"<<endl;
		cin >> choice;
		if(choice == 1) {
			cout<<"Nhap vao 2 so a va b"<<endl;
			cin>> a;
			cin>> b;
			cout<<sum(a,b)<<endl;
		}
		if(choice == 2) {
			cout<<"Nhap vao 2 so a va b"<<endl;
			cin>> a;
			cin>> b;
			cout<<subtract(a,b)<<endl;
		}
		if(choice == 3) {
			cout<<"Nhap vao 2 so a va b"<<endl;
			cin>> a;
			cin>> b;
			cout<<multiply(a,b)<<endl;
		}
		if(choice == 4) {
			cout<<"Nhap vao 2 so a va b"<<endl;
			cin>> a;
			cin>> b;
			if(b == 0) {
				cout<<"Phep tinh khong hop le"<<endl;
				continue;
			}
			cout<<devide(a,b)<<endl;
		}
		if(choice == 0) break;
	}
	 
	return 0;
}
