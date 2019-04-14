/*A continuación se muestra un programa de ejemplo. Utilísela para responder a la siguiente pregunta: 
¿Qué sucede si declaramos un identificador en un bloque y, a continuación, se vuelve a declarar ese mismo 
identificador en un bloque anidado dentro de ese bloque?*/


#include<iostream>
using namespace std;

int main(){
	
	int arg1;
	arg1 =-1;
	{
	    char arg1 ='A';
	    cout<<arg1<<"\n";
    }
	return 0;
}

//El programa compila
