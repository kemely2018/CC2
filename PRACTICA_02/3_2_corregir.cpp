/*Corrija la función:

#include <iostream >

void printNum() { std::cout << number; };

int main() {
int number = 35;
printNum(number);
return 0;

*/

#include<iostream>
using namespace std;
void printNum(int number){
	cout<<number;
}
int main(){
	int number=35;
	printNum(number);
	return 0;
}
