#include<iostream>
using namespace std;
int main(){
	const int ARRAY_LEN=100;
	int arr[ARRAY_LEN]={1,2,3,4};
	int *p=arr;
	int *q=&arr[0];
	int *z=&arr[3];
	for(int i=0;i<4;i++){
		cout<<*(arr+i)<<" ";
	}
	cout<<*q<<endl;
	cout<<q<<endl;
	cout<<*z<<endl;
	cout<<z<<endl;


	return 0;
}
