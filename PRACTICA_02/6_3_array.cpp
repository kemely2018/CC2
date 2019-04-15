/*Assumela existencia de dos constantes WIDTH y LENGTH.
 Escriba una función con la siguiente firma:
 	
 void transpose( const int input[][LENGTH], int output[][WIDTH]);
 */

#include<iostream>
#define LARGO 2
#define ANCHO 2
using namespace std;

void transpose(const int input[][LARGO],int output[][ANCHO]){
	for(int i=0;i<LARGO;i++){
		for(int j=0;j<ANCHO;j++){
			output[j][i]=input[i][j];
		}
	}
	
}
void mostrar(const int n[][LARGO]){
	for(int i=0;i<LARGO;i++){
		for(int j=0;j<ANCHO;j++){
			cout<<n[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	const int m1[2][LARGO]={2,3,
	                        8,9};
	int m2[2][ANCHO];
	transpose(m1,m2);
	cout<<"\nMatriz Original\n";
	mostrar(m1);
	cout<<"\nMatriz Transpuesta\n";
	mostrar(m2);
	return 0;
	
}
