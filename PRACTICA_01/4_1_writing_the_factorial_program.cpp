/*Aquí está el código para un programa factorial. 
Cópielo en el IDE y compruebe que compila*/

#include<iostream>
using namespace std;

int main(){
	short number;
	cout<<"Introduzca un numero: ";cin>>number;
	cout<<"El factorial de "<<number<<" es ";
	int acu=1;
	for(;number>0;number--){
		acu *= number;
	}
	cout<<acu;
	return 0;
}

/*¿Qué obtienes Cuando ingresas los siguientes valores: 0, 1, 2, 9, 10?
0!=1
1!=1
2!=2
3!=6
9!=362880
10!=3628800

*/

