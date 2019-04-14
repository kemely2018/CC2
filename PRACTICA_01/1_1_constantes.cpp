#include<iostream>
using namespace std;

//Definir constantes (#define)
//Declarar constantes (const)

#define PI 3.14159
#define NEWLINE "\n"

int main(){
	
	double  r=5.0;
	double  circulo;
	const int ejem=5;
	
	circulo =2*PI*r;  //circulo=2*3.14159*5;
	cout<<circulo<<NEWLINE; //cout<<circulo<<"\n"
	
	//ejem =3; Esto generará un error pues ejem es de solo lectura (constante)
	cout<<ejem;
	
	return 0;
}


