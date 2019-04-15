/*Escriba una función que devuelva la longitud de una cadena (Char *), 
excluyendo el carácter final NULL. No debe utilizar ninguna función 
de biblioteca estándar. Puede utilizar operadores aritméticos y 
de desreferenciación, pero no el operador de indexación ([]).*/

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
