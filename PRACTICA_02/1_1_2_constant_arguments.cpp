#include<iostream>
using namespace std;

void print(const long &x){//paso por referencia evita la sobrecarga de copiar un gran número
	cout<<x;
}
int main(){
	int x=234923592;
	print(x); //Se garantiza que x no se cambiará por este
	return 0;
}

