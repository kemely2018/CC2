#include<iostream>
#include<cstdlib>//contiene algunas funciones matemáticas
using namespace std;

int difference(const int x,const int y){
	int diff=abs(x-y);
	return diff;//sin este salia -1
	
}
int main(){
	cout<<difference(24,1238);// abs(n) retorna el valor absoluto de n
	return 0;
}
