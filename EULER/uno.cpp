/*Si enumeramos todos los n�meros naturales por debajo de 10 que son m�ltiplos 
de 3 o 5, obtenemos 3, 5, 6 y 9. La suma de estos m�ltiplos es 23.
Encuentra la suma de todos los m�ltiplos de 3 o 5 por debajo de 1000.*/

#include<iostream>
using namespace std;
int main(){
	int n=1000;
	int cont=0;
	for(int i=1;i<n;i++){
		if(i%3==0 ||i%5==0){
			cont +=i;
			//cout<<i<<" ";
		}
	}
	cout<<cont;
}



