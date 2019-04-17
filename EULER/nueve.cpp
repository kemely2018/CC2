
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,d;
	for(b=1;b<1000;b++){
		for(a=1;a<b;a++){
			c=pow(a,2)+pow(b,2);
			d=sqrt(c);
            if (b + a + d == 1000 && c==pow(d,2)) {
                cout << a*b*d<< endl;
                break;
            }
		}
	}
}


