/*2520 es el número más pequeño que puede dividirse por cada uno de los números
 del 1 al 10 sin ningún resto. ¿Cuál es el número positivo más pequeño que es 
 divisible por todos los números del 1 al 20? */
 
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
