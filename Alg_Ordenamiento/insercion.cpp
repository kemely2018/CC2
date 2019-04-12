#include<iostream>
using namespace std;

void mostrar(int n[],int);
void insercion(int n[],int);


int main(){
	const int TAM=5;
	int numeros[TAM]={5,3,4,1,2};
	cout<<"Arreglo original:"<<endl;
	mostrar(numeros,TAM);
	cout<<"Ordenamiento por Insercion"<<endl;
	insercion(numeros,TAM);
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
void insercion(int n[],int tam){
	int i,pos,aux;
	for(int i=0;i<tam;i++){
		pos=i;
		aux=n[i];
		while((pos>0)&&(n[pos-1]>aux)){
			n[pos]=n[pos-1];
		    pos--;
		}
		n[pos]=aux;
	}
	
}


