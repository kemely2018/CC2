/*Escribe 2 funciones más de tal que puedas encontrar la suma de cualquier lugar 
entre 2 y 4 enteros escribiendo SUM (NUM1, NUM2,...).*/

#include<iostream>
using namespace std;
int suma(const int a,const int b,const int c){
	return a+b+c;
}
int suma(const int a,const int b,const int c,const int d){
	return a+b+c+d;
}
int main(){
	cout<<suma(1,2,3)<<endl;
	cout<<suma(1,2,3,4);
	return 0;
}
