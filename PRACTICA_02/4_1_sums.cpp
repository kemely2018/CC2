/*Escriba una función de suma única que devuelva la suma de dos enteros. También
 escriba la función equivalente para tomar la suma de dos dobles.*/
 
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
