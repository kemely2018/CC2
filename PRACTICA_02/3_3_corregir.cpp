#include<iostream>
using namespace std;

void doubleNumber(int &num){//dato por referencia
	num=num*2;
}
int main(){
	int num=35;
	doubleNumber(num);
	cout<<num;//deberia imprimir 70
	return 0;
}

