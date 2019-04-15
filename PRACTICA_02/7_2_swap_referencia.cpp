/*Escriba una función que intercambia dos valores enteros mediante la 
llamada por referencia.*/
#include<iostream>
using namespace std;

void swap(int &x,int &y){
	int tmp=x;
	x=y;
	y=tmp;
}
int main(){
	int a=1;
	int b=2;
	swap(a,b);
	cout<<a<<endl;
	cout<<b;
}
