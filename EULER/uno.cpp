/*Si enumeramos todos los números naturales por debajo de 10 que son múltiplos 
de 3 o 5, obtenemos 3, 5, 6 y 9. La suma de estos múltiplos es 23.
Encuentra la suma de todos los múltiplos de 3 o 5 por debajo de 1000.*/

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



