/*Intente introducir algunos n�meros m�s grandes. 
�Cu�l es el n�mero m�nimo para el que el programa modificado de 4,2 deja de 
funcionar correctamente? (No deber�as tener que pasar alrededor de 25.Usted 
puede encontrar la calculadora incorporada de Google �til en la comprobaci�n 
de faccionales.) �Puedes explicarme qu� ha pasado?*/

#include<iostream>
using namespace std;

int main(){
	short number;
	cout<<"Introduzca un numero: ";cin>>number;
	cout<<"El factorial de "<<number<<" es ";
	int acu=1;//El tipo de dato que lo va almacenar
	for(;number>0;number--){
		acu *= number;
	}
	cout<<acu;
	return 0;
}

/*El n�mero en el que el programa falla depende de la arquitectura del sistema;
 los sistemas de 64 bits a menudo fallan a los 17. 
--En mi caso en el numero 13 falla*/


