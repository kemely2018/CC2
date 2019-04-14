/*A continuación se muestra un programa de ejemplo. Se usa para responder a la siguiente pregunta: 
Supongamos que un identificador tiene dos declaraciones diferentes, una en un bloque externo y otra en un bloque 
interno anidado. Si se accede al nombre dentro del bloque interno, ¿qué declaración se utiliza?*/

#include<iostream>
using namespace std;

int main(){
	
	int arg1;
	arg1 =-1;
	{
	    char arg1 ='A';
	    cout<<arg1<<"\n";//SE UTILIZA LA DECLARACION DEL BLOQUE INTERNO
    }
	return 0;
}
