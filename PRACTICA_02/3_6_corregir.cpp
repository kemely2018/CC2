#include<iostream>
using namespace std;

const int ARRAY_LEN =10;
int main(){
	int arr[ARRAY_LEN]={10};
	int *xPtr=arr,*yPtr=arr+ARRAY_LEN-1;//AGREGAR * a yPtr
	cout<<*xPtr<<" "<<*yPtr;
	return 0;
	
}
