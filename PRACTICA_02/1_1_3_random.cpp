#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	int randNum=rand();
	cout<<"El numero random es: "<<randNum;
	return 0;
}

