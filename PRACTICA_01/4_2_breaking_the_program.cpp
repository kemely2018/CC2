/* Ejecute el programa y escriba - 1. �Qu� pasa? 
�C�mo puede cambiar el c�digo de tal manera que no exhiba este comportamiento?*/

#include<iostream>
using namespace std;

int main(){
	short number;
	cout<<"Introduzca un numero: ";cin>>number;
	if(number<0){
		cout<<"Numero invalido";
	}
	else{
	int number2=number;
	int acu=1;
	for(;number>0;number--){
		acu *= number;
	}
	cout<<"El factorial de "<<number2<<" es "<<acu;
	return 0;
    }
}

/*Si se introduce - 1, el programa emitir� 1, que es incorrecto porque 
la funci�n factorial (o funci�n gamma) no est� definida para los n�meros 
negativos*/
