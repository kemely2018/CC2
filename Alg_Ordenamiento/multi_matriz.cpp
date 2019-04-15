#include<iostream>
using namespace std;
#define M 2 // Hay que modificar estas entradas para
#define N 3 // cambiar el tamanio de las matrices

void multi(int a[][N],int b[][N],int c[][N]);
void mostrar(int c[][N]);
void mostrar2(int c[][N]);
int main(){
	int A[M][N]={ 1,2,3,
	              4,5,6,};
	int B[N][N]={1,2,3,
	             4,5,6,
				 7,8,9,};
	int C[M][N];
	multi(A,B,C);
	cout<<"MATRIZ 1:"<<endl;
	mostrar(A);
	cout<<"\n";
	cout<<"MATRIZ 2:"<<endl;
	mostrar2(B);
	cout<<"\n";
	cout<<"MATRIZ FINAL:"<<endl;
	mostrar(C);
	return 0;
}

void multi(int a[][N],int b[][N],int c[][N]){
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			int acu=0;
			for(int con=0;con<N;con++){
				acu=acu+a[i][con]*b[con][j];
			}
			 c[i][j]=acu;
		}
	}
}
void mostrar(int c[][N]){
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void mostrar2(int c[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
}
