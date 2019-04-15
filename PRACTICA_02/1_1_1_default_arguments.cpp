#include<iostream>
using namespace std;

void mostrar(char *msg="Some message",int n=1){
	for(int i=0;i<n;i++){
		cout<<msg;
	}
}
int main(){
	//mostrar("Some message",1);
	//mostrar("Some message");
	mostrar();
	return 0;
}
