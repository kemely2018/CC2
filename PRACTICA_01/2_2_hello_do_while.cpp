/*Escriba un programa que muestre "Hola mundo" N veces 
(donde n es un número entero no negativo que el usuario ingresará) 
con : DO.....WHILE  */

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"N: ";cin>>n;
	do{
		cout<<"Hola mundo"<<endl;

	}while(--n >0);
	
	return 0;
}
