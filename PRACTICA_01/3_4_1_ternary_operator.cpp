/*Escribir un programa que bucles indefinidamente. En cada iteración del bucle, leer en un entero N (declarado como un int) que es ingresados por un usuario,
salida N/5 si N es no negativo y divisible por 5, y -1 en caso contrario. Utilice el operador ternario (?:) para lograrlo. 
(Sugerencia: el operador del módulo puede ser útil.)*/


#include<iostream>
using namespace std;

int main(){
	while(1){
		int n;
		cout<<"N: ";cin>>n;
		cout<<((n%5==0 && n>=0)? n/5: -1)<<endl;
	}
	return 0;
}
 
