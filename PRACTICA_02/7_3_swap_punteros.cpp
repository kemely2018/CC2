/*Reescriba la función de la parte 2 para utilizar punteros en
 lugar de referencias.*/
 #include<iostream>
using namespace std;

void swap(int *x,int *y){
	int tmp=*x;
	*x=*y;
	*y=tmp;
}
int main(){
	int a=1;
	int b=2;
	swap(&a,&b);
	cout<<a<<endl;
	cout<<b;
}
