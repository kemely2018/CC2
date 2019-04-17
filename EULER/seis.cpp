/* La suma de los cuadrados de los primeros diez números naturales es:
	                      1^2 + 2^2 + ... + 10^2 = 385
   El cuadrado de la suma de los primeros diez números naturales es:
   	                    (1 + 2 + ... + 10)^ 2 = 55^2 = 3025
   Por lo tanto, la diferencia entre la suma de los cuadrados de los primeros 
   diez números naturales y el cuadrado de la suma es 3025 - 385 = 2640.
   Encuentra la diferencia entre la suma de los cuadrados de los primeros 
   cien números naturales y el cuadrado de la suma.*/


#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n=100 ,cont =0,cont2=0,ele=0;
	for(int i=0;i<=n;i++){
		cont +=pow(i,2);	
	}
	//cout<<cont;
	for(int j=0;j<=n;j++){
		cont2 +=j;	
	}	
	ele=pow(cont2,2);
	//cout<<ele;
	
	cout<< ele-cont;
}
