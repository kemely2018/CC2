/*Escriba una funci�n de suma �nica que devuelva la suma de dos enteros. Tambi�n
 escriba la funci�n equivalente para tomar la suma de dos dobles.*/
 
#include<iostream>
using namespace std;


int suma(const int x,const int y){
	return x+y;
}

double suma(const double x,const double y){
	return x+y;
}
int main(){
	cout<<suma(1,10);
	return 0;
}
