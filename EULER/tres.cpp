/* Los factores primos de 13195 son 5, 7, 13 y 29. 
�Cu�l es el factor primo m�s grande del n�mero 600851475143?*/

#include <iostream>
using namespace std;
int main()
{
	long long n=600851475143;
	for(int i=2;i<n;i++){
		while(n%i==0){
			n /=i;
		}
	}
	cout<<n;
	
}
