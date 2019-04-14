/*Modifique el código dado de tal que las entradas
 negativas no rompan el programa y el número más 
 pequeño que rompió el programa antes de ahora funciona. 
 No codificar las respuestas.*/

#include<iostream>
using namespace std;

long long acu=1;//se modifico long long y llega hasta el 20!
int main(){
	int number;
	cout<<"Introduzca un numero: ";cin>>number;
	if(number<0){
		cout<<"Numero invalido";
	}
	else if(number>20){
		cout<<"Resultado invalido";
	}
	else{
	int number2=number;
	for(;number>0;number--){
		acu *= number;
	}
	cout<<"El factorial de "<<number2<<" es "<<acu;
	return 0;
    }
}

