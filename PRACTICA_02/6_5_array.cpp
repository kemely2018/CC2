#include<iostream>
using namespace std;

void reverse(const int n[],const int tam){
	for(int i=tam-1;i>=0;i--){
		cout<<*(n+i)<<" ";
	}
}

int main(){
	const int numeros[]={1,2,3,4,5};
	const int t=5;
	reverse(numeros,t);
}
