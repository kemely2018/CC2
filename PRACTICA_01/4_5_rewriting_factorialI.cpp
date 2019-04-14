/*Dado que sabemos que s�lo un peque�o n�mero de entradas producen 
salidas v�lidas, podemos alternativamente codificar las faccionales de 
estas entradas. Reescriba el programa de la parte anterior ("Rewriting 
factorial") usando una instrucci�n switch para demostrar para las 
entradas hasta 10 C�mo har�a esto. (Por supuesto, el c�digo para las 
entradas de m�s de 10 ser�a b�sicamente el mismo, pero no es necesario
 pasar por el trabajo de encontrar todos esos grandes factoriales.)*/
 
 #include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Ingresa un numero: "; cin >> n;
    switch ( n ) {
        case 0:
        case 1:
            cout << "El factorial de " << n << " es 1";
            break;
        case 2:
            cout << "El factorial de " << n << " es 2";
            break;
        
        case 3:
            cout << "El factorial de " << n << " es 6";
            break;
        
        case 4:
            cout << "El factorial de " << n << " es 24";
            break;
        
        case 5:
            cout << "El factorial de " << n << " es 120";
            break;
        
        case 6:
            cout << "El factorial de " << n << " es 720";
            break;
        
        case 7:
        	cout << "El factorial de " << n << " es 5040";
            break;
        
        case 8:
        	cout << "El factorial de " << n << " es 40320";
            break;
        
        case 9:
        	cout << "El factorial de " << n << " es 362880";
            break;
        case 10:
        	cout << "El factorial de " << n << " es 3628800";
    
        default:
            cout<<"No soportado";
            break;
    }
    return 0;
}
