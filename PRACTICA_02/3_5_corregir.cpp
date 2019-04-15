#include<iostream>
using namespace std;
int suma(const int x,const int y,const int z){
	return x+y+z;
}
int main(){
	cout<<suma(1,2,3);//debe imprimir 6
	return 0;
}
