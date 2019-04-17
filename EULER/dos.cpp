/* Cada nuevo t�rmino en la secuencia de Fibonacci se genera con la suma de los 2 t�rminos anteriores. 
Empezando con el 1 y 2, los primeros 10 t�rminos ser�an: 
                           1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
Encuentre la suma de todos los n�meros pares en la secuencia que no exceda los 4 millones.*/

#include <iostream>
using namespace std;

int main(){
	int suma=0,x=1,y=1;
	while(y<4000000){
		y=x+y;
		x=y-x;
		if(y%2==0){
			suma+=y;
		}
	}
	cout<<suma;
    return 0;
}
