/*Un número palindrómico se lee igual en ambos sentidos. 
El palíndromo más grande hecho del producto de dos números de 2 dígitos es:
                                 9009 = 91 × 99
Encuentre el palíndromo más grande hecho del producto de dos números de 3 dígitos.*/

#include<iostream>
using namespace std;
int invertir(int n){
	int respuesta=0;
	while(n>0){
		respuesta =respuesta+ n%10;
		respuesta *=10;
		n /=10;
	}
	return respuesta/10;
}

bool palindromo(int n){
	if(n == invertir(n)){
		return true;
	}
	else{
		return false;
	}
}


int main(){

	int lon=1000,mayor=0;
	for(int i=100;i<lon;i++){
		for(int j=100;j<lon;j++){
			int m=i*j;
			if (palindromo(m)==true ) {
                cout<<m<<"  ";
            }
        }
    }
	return 0;
}
