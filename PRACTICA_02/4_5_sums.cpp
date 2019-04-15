/*Escribir una función de suma única capaz de controlar un número arbitrario 
de enteros. Debe tomar dos argumentos, incluir un bucle y devolver un entero. 
(Sugerencia: ¿Qué tipos de datos puede usar para representar un conjunto 
arbitrariamente grande de enteros en dos argumentos?) Los arreglos*/

#include<iostream>
using namespace std;

int suma(const int n[],const int tam){
	int s=0;
	for(int i=0;i< tam;i++){
		s += n[i];
	}
	return s;
}
int main(){
	const int numeros[]={1,2,3,4,5,6,7,8};
	const int tamano=8;
	cout<<suma(numeros,tamano);
}
