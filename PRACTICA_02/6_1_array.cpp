/*Escribir una función print array para imprimir el contenido de un arreglo
 de enteros con la cadena "," entre los elementos 
 (pero no después del último elemento). Su función no debe devolver nada.*/
 
#include<iostream>
using namespace std;
void mostrar(const int n[],const int tam){
	for(int i=0;i<tam;i++){
		cout<<n[i];
		if (i<tam-1){
			cout<<",";
		}
	}
}

int main(){
	const int numeros[]={1,2,3,4,5};
	const int t=5;
	mostrar(numeros,t);
}

