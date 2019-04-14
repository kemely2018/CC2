#include<iostream>
using namespace std;
int main(){
	int j,i;
	cout<<"POSTINCREMENTO"<<endl;
	for(i=0;i<10;){
		cout<<i++<<" "; //POSTINCREMENTO
	}
	cout<<"\n";
	cout<<"PREINCREMENTO"<<endl;
	for(i=0;i<10;){
		cout<<++i<<" "; //PREINCREMENTO
	}
	cout<<"\n";
	cout<<"POST-decrement"<<endl;
	for(i=10;i>0;){
		cout<<i--<<" "; //POST-decrement 	
	}	
	cout<<"\n";
	cout<<"PRE-decrement"<<endl;
	for(i=10;i>0;){
		cout<<--i<<" "; //PRE-decrement 	
	}	
	return 0;
}
