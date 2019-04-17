/*Un n�mero palindr�mico se lee igual en ambos sentidos. 
El pal�ndromo m�s grande hecho del producto de dos n�meros de 2 d�gitos es:
                                 9009 = 91 � 99
Encuentre el pal�ndromo m�s grande hecho del producto de dos n�meros de 3 d�gitos.*/

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
