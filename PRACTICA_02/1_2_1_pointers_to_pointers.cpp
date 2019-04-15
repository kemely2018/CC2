#include<iostream>
using namespace std;
void mostrar( char **strPtr){
	int x;
	cin>>x;
	if(x<0){
		*strPtr="Negativo";
	}
	else{
		*strPtr="Positivo";
	}
}
int main(){
	char *str;
	mostrar(&str);
	cout<<str;
	return 0;
}
