/* La suma de los números primos por debajo de 10 es 2 3 5 7 = 17.
Encuentra la suma de todos los números primos por debajo de dos millones.*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long n=2000000,cont=0,h=0;
	for(int i=3;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0){
				cont++;
			}
	    }
		if(cont!=2){
				cont=0;
		}
		else{
			h+=i;
		}		
	}
	cout<<h+2<<" ";
return 0;
	
}

