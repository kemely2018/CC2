/*Escriba una funci�n que devuelva la longitud de una cadena (Char *), 
excluyendo el car�cter final NULL. No debe utilizar ninguna funci�n 
de biblioteca est�ndar. Puede utilizar operadores aritm�ticos y 
de desreferenciaci�n, pero no el operador de indexaci�n ([]).*/

#include<iostream>
using namespace std;

int stringLength(const char *str){
	int len=0;
	while(*(str+len)!='\0'){
		++len;
	}
	return len;
}
int main(){
	const char *letras={"kemely"};
	cout<<stringLength(letras);
	return 0;
}
