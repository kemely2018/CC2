/*�Qu� hace este fragmento de c�digo? Intenta hacer algunos ejemplos con n�meros
peque�os en papel si est�s atascado. 
(Sugerencia: Piense en los n�meros en notaci�n binaria-en la base 2. 
�C�mo expresar�a un n�mero como una suma de poderes de 2? 
Tambi�n puede resultar �til notar que multiplicar por 2N equivale a multiplicar por 2 n veces. 
Tambi�n debe tener en cuenta la propiedad distributiva de la multiplicaci�n: a (x + y) = AX + AY.)
*/

#include<iostream>
using namespace std;
int main(){

	int dole=14,bob=5;
	int acu=0;
	while(1){
		if(dole==0||bob==0)break;
		acu += ((dole%2==1)?bob:0);
		dole/=2;
		bob*=2;
	}
	cout<<acu;
	return 0;
}

//La multiplicacion rusa
