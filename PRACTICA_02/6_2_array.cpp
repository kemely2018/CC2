/*Escribir una función inversa que toma un array de enteros y su longitud como 
argumentos. La función debe revertir el contenido de el array, dejando los valores
 invertidos en el array original y no devolver nada.*/

#include<iostream>
using namespace std;

void mostrar(const int n[],const int tam){
	for(int i=tam-1;i>=0;i--){
		cout<<n[i]<<" ";
	}
}

int main(){
	const int numeros[]={1,2,3,4,5};
	const int t=5;
	mostrar(numeros,t);
}
