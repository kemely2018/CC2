/*Al enumerar los primeros seis n�meros primos: 2, 3, 5, 7, 11 y 13, 
podemos ver que el sexto n�mero primo es 13. �Qu� es el n�mero primo 10 001? */
#include<iostream>
using namespace std;
int main(){
	int n=1000000,cont=0,h=0;
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
			h++;
			if(h<10001){
				cout<<i<<" ";
			}
			
		}
	}
return 0;
	
}


