#include<iostream>
using namespace std;

void print(const long &x){//paso por referencia evita la sobrecarga de copiar un gran n�mero
	cout<<x;
}
int main(){
	int x=234923592;
	print(x); //Se garantiza que x no se cambiar� por este
	return 0;
}

