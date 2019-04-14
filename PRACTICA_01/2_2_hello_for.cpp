/*Escriba un programa que muestre "Hola mundo" N veces 
(donde n es un número entero no negativo que el usuario ingresará) 
con :FOR  */

#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"N: ";cin>>n;
	for(i=0;i<n;++i){
		cout<<"Hola mundo"<<endl;
	}
	return 0;
}
