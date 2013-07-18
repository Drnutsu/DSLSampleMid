#include <iostream>

using namespace std;

template <typename type,int MAX = 10>
class stack {
private:
	type arr[MAX];
	int top;
public:
	stack(){
		top = -1;
	}

	void push(type input){
		if(top < MAX-1) arr[++top] = input;
		else cout << "stack is full" << endl;
	}

	type pop(){
		if(top != -1) return arr[top--];
		else cout << "your stack is empty" << endl;
	}
};