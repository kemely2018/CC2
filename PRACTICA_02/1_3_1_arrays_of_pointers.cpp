#include<iostream>
using namespace std;
int main(){
	const char *suitNames[]={"Clubs","Diamonds","Spades","Clubs"};
	cout<<"Ingrese un numero entre(0-3)";
	unsigned int suitNum;
	cin>>suitNum;
	if(suitNum <=4){
		cout<<suitNames[suitNum-1];
	}
}
