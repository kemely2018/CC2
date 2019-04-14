#include<iostream>
using namespace std;
int main(){
	int a=5,b=8,result;
	/*if(a>b){
		result=a;
	}                
	else{
		result=b;
	}
    */
    
	result = (a>b)?a:b;
	cout<<"El mayor es: "<<result;
	return 0;
}
