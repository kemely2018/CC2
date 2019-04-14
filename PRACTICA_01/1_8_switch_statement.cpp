#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese un numero: ";cin>>n;
	switch(n){
		case 0:
			cout<<"Usted escribio cero";
			break;
		case 1:
		case 4:
		case 9:
			cout<<n<<" es un cuadrado perfecto";
			break;
		case 2:
			cout<<n<<" es un numero par"<<endl;
		case 3:
		case 5:
		case 7:
			cout<<n<<" es un nmero primo";
			break;
		case 6:
		case 8:
			cout<<n<<" es un numero par";
		    break;
		default:
			cout<<"Solo numeros enteros positivos son permitidos";
			break;
	}
	return 0;
}
