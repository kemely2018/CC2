#include<iostream>
#include <vector> 
using namespace std;

template<class T> class Stack;
template<class T>
Stack<T> operator+(const Stack<T> &s1,const Stack<T> &s2)
{
	Stack<T> result =s1;
	for(unsigned i=0;i<s1.items.size();++i){
		result.items.push_back(s2.items[i]);
	}
	return result;
}

template<class T>
class Stack{
	friend Stack<T> operator+<>(const Stack<T> &s1,const Stack<T> &s2);
	vector<T> items;
	public:
		bool empty() const{return items.empty();}
		void push(const T &item){
			items.push_back(item);
		}
		T pop(){
			T last =items.back();
			items.pop_back();
			return last;
		}
		T top(){
			return items.back();;
		}

};

int main(){
	Stack <int > a , b; 
	a. push (1) ; 
	a. push (2) ; 
	a. push (7) ;
	b. push (3) ; 
	b. push (4) ; 
	b. push (5) ;
	Stack <int > c = a + b;
	cout<<c.top();
	 
}










