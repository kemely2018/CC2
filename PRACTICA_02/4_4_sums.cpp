/*Ahora, escriba una sola función que, utilizando los argumentos por defecto,
permita no hacer la suma en cualquier lugar entre 2 y 4 intérpretes. 
¿Qué sucedería tanto en esta definición como en su función de 3 
argumentos de la parte 3 en el mismo archivo, y se llama suma (3, 5, 7)? ¿Por qué?*/

#include<iostream>
using namespace std;

int suma(const int a,const int b,const int c=0,const int d=0){
	return a+b+c+d;
}
int main(){
	cout<<suma(1,2)<<endl;
	cout<<suma(1,2,3)<<endl;
	cout<<suma(1,2,3,4);
	return 0;
}
