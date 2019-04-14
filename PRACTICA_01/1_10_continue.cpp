//imprimir números pares entre 1y 10

#include<iostream>
using namespace std;

int main(){
	
	for(int i=1;i<=10;++i){
		if(i%2!=0){
			continue;//salta todos los numeros impares
		}
	cout<<i<<" ";
	}
	
	
	return 0;
}
