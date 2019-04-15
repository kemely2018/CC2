/*Escribir una sola instrucción para llevar a cabo cada una de las siguientes 
tareas (suponiendo que para cada uno de los anteriores ya se han ejecutado). 
Asegúrese de entender lo que sucede en cada uno de ellos.*/
#include<iostream>
using namespace std;
void lab() {
    
    char *oddOrEven = "Never odd or even";
    
    /*1.Cree un puntero a un valor char denominado nthCharPtr apuntando al carácter 6th
    de oddOrEven (Recuerde que el primer elemento tiene el índice 0). Utilice el operador de indexación.*/
    char *nthCharPtr = &oddOrEven[5];
    
    // Imprima el valor señalado actualmente por nthCharPtr.
    //cout << "nthCharPtr: " << nthCharPtr << '\n';
    
    // 2.Mediante la aritmética de puntero, actualice nthCharPtr para que apunte al carácter 4th en oddOrEven
    nthCharPtr = nthCharPtr - 2;
    
    // 3.Imprima el valor señalado actualmente por nthCharPtr.
    cout << "nthCharPtr: " << nthCharPtr << '\n';
    
    // 4.Crear un nuevo puntero a un puntero (un Char **) denominado pointerPtr que apunta a nthCharPtr.
    char **pointerPtr = &nthCharPtr;
    
    // 5.Imprima el valor almacenado en pointerPtr.
    cout << "pointerPtr: " << pointerPtr << '\n';
    
    // 6.Con pointerPtr, imprima el valor señalado por nthCharPtr.
    cout << "*pointerPtr: " << *pointerPtr << '\n';

    /*Actualice nthCharPtr para que apunte al siguiente carácter de oddOrEven (es decir, 
	un carácter más allá de la ubicación a la que apunta actualmente).*/
    nthCharPtr = nthCharPtr + 1;
    
    /*Mediante la aritmética de punteros, imprima la distancia del carácter que apunta actualmente
     por nthCharPtr es desde el principio de la cadena.*/
    cout << nthCharPtr - oddOrEven << '\n';
    
    return;
}
int main() {
	lab();
	return 0;
}
