/*Escriba un programa que muestre "Hola mundo" N veces 
(donde n es un n�mero entero no negativo que el usuario ingresar�) 
con : WHILE  */

#include<iostream>
using namespace std;

int main(){
    int n;
	cout<<"N: ";cin>>n;
	while(n-- >0){
		cout<<"Hola mundo"<<endl;
	}
	return 0;
}
