/*2520 es el n�mero m�s peque�o que puede dividirse por cada uno de los n�meros
 del 1 al 10 sin ning�n resto. �Cu�l es el n�mero positivo m�s peque�o que es 
 divisible por todos los n�meros del 1 al 20? */
 
#include<iostream>
using namespace std;
int main(){
	long n=1000000000,cont=0,menor=0;
	for(int i=20;i<=n;i++){
		for(int j=1;j<=20;j++){
			if(i%j!=0){
				break;
			}
			else{
				cont++;
			}
	    }
	    if(cont!=20){
	    	cont=0;
	    }
	    else{
	    	cout<<i;
	    	break;
	    }
    }
}
