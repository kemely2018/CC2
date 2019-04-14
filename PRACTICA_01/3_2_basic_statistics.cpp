/*Dada una lista de N enteros, encuentre su media (como un Double), el valor máximo, el valor mínimo y el rango.
 El programa primero pedirá N, el número de enteros en la lista, que el usuario ingresará. 
 Entonces el usuario ingresará N más números.
 Aquí hay una secuencia de entrada de muestra:
 3 <--N 
 2
 1
 3
 Se dan tres números: 2, 1, 3. la salida debe ser como sigue:
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
	//controlamos el primer número por separado
	cin>>acc;
	int max=acc;
	int min=acc;
	//a continuación, procese el resto de la entrada
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
















 
 
