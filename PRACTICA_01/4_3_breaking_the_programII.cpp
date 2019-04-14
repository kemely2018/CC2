/*Intente introducir algunos números más grandes. 
¿Cuál es el número mínimo para el que el programa modificado de 4,2 deja de 
funcionar correctamente? (No deberías tener que pasar alrededor de 25.Usted 
puede encontrar la calculadora incorporada de Google útil en la comprobación 
de faccionales.) ¿Puedes explicarme qué ha pasado?*/

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

/*El número en el que el programa falla depende de la arquitectura del sistema;
 los sistemas de 64 bits a menudo fallan a los 17. 
--En mi caso en el numero 13 falla*/


