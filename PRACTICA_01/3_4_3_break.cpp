/*Modifique el código de 3.4.2 para permitir que el usuario salga del bucle 
introduciendo-1 o cualquier número negativo. Antes de que salga el programa,
salida de la cadena "Goodbye!".*/

#include<iostream>
using namespace std;
int main(){
	while(1){
		int n;
		cout<<"N: ";cin>>n;
		if(n<=-1){
			cout<<"Goodbye !";
			break;
		}
		if(n%5>0){
			cout<<"-1"<<endl;
			continue;
		}
		cout<<n/5<<endl;
	}
	retun 0;
}
 
 
