//�Qu� hace este programa?

//N es un entero no negativo

#include<iostream>
using namespace std;
int main() {

    int N;
    cout<<"N: ";cin >> N;
    double acc = 0;
    for( int i = 1; i <= N; ++i ) {
        double term = ( 1.0 / i );
        acc += term * term;
        for( int j = 1; j < i; ++j )
            acc *= -1;
    }
    cout << acc << endl;
    return 0;
}
