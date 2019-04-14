/*Dada una lista de N enteros, encuentre su media (como un Double), el valor m�ximo, el valor m�nimo y el rango.
 El programa primero pedir� N, el n�mero de enteros en la lista, que el usuario ingresar�. 
 Entonces el usuario ingresar� N m�s n�meros.
 Aqu� hay una secuencia de entrada de muestra:
 3 <--N 
 2
 1
 3
 Se dan tres n�meros: 2, 1, 3. la salida debe ser como sigue:
 Media: 2 
 Max: 3 
 Min: 1 
 Rango: 2
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"N: ";cin>>n;
	int acc=0;
	//controlamos el primer n�mero por separado
	cin>>acc;
	int max=acc;
	int min=acc;
	//a continuaci�n, procese el resto de la entrada
	for(int i=1;i<n;i++){
		int x;
		cin>>x;
		acc+=x;
		if(x<min){
			min=x;
		}
		if(x>max){
			max=x;
		}
	}
	cout<<"Media: "<<(double)acc/n<<endl;
	cout<<"Max: "<<max<<endl;
	cout<<"Min: "<<min<<endl;
	cout<<"Rango: "<<(max-min)<<endl;
	return 0;
}
















 
 
