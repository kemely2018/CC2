/*Ahora reescriba su función desde 4.4 para usar recursion en lugar del
bucle. La firma de la función no debe cambiar. 
Pensar en operador ternario puede ayudarte.*/

#include<iostream>
using namespace std;
int suma(int n[],int tam){
	return tam==0? 0: n[0]+suma(n+1,tam-1);
}
int main(){
	int numeros[]={1,2,3,4,5,6,7,8};
	int tamano=8;
	cout<<suma(numeros,tamano)<<endl;
	
}
