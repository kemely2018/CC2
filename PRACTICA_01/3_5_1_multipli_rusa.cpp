/*¿Qué hace este fragmento de código? Intenta hacer algunos ejemplos con números
pequeños en papel si estás atascado. 
(Sugerencia: Piense en los números en notación binaria-en la base 2. 
¿Cómo expresaría un número como una suma de poderes de 2? 
También puede resultar útil notar que multiplicar por 2N equivale a multiplicar por 2 n veces. 
También debe tener en cuenta la propiedad distributiva de la multiplicación: a (x + y) = AX + AY.)
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
