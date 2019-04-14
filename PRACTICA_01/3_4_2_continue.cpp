/*Modifique el código de 3.4.1 para que, si la condición falla, no se imprima nada. 
Utilice un comando if y un Continue (en lugar del operador ternario) para lograrlo.*/

#include<iostream>
using namespace std;
int main(){
	while(1){
		int n;
		cout<<"N: ";cin>>n;
		if(n%5>0){
			cout<<"-1"<<endl;
			continue;
		}
		cout<<n/5<<endl;
	}
	return 0;
}
