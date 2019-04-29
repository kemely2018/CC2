#include<iostream>
#include "geometry.h"
using namespace std;
int main(){
	Point p(5,3);
	p.setX(4);
	cout<<p.getX()<<" "<<p.getY();
	return 0;
}
