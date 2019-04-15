#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int *getRandNumPtr(){
	int x=rand();
	return &x;
}
int main(){
	int *randNumPtr=getRandNumPtr();
	cout<< *randNumPtr;
	return 0;
}
