/*Se utiliza para romper un bucle o una instrucción switch.*/


//Produce los primeros 10 enteros positivos
#include<iostream>
using namespace std;
int main(){
	
	int i=1;
	while(true){
		if(i>10){
			break;
		}
		cout<<i<<endl;
		++i;
	}
	return 0;
}

