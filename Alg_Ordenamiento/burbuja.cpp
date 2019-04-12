#include<iostream>
using namespace std;

void mostrar(int n[],int);
void burbuja(int n[],int);


int main(){
	const int TAM=5;
	int numeros[TAM]={4,5,2,1,3};
	cout<<"Arreglo original:"<<endl;
	mostrar(numeros,TAM);
	cout<<"Ordenamiento Burbuja"<<endl;
	burbuja(numeros,TAM);
	mostrar(numeros,TAM);

	return 0;
}

void mostrar(int n[],int tam){
	for(int i=0;i<tam;i++){
		cout<<n[i]<<" ";
	}
	cout<<"\n";
	
}
void burbuja(int n[],int tam){
    int i,j,aux;
	for(i=0;i<tam;i++){
		for(j=0;j<tam-1;j++){
			if(n[j]>n[j+1]){
				aux=n[j];
				n[j]=n[j+1];
				n[j+1]=aux;
			}
		}
	}	
}



