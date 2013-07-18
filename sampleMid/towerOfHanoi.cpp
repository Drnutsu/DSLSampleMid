#include <iostream>
#include "stack.cpp"
using namespace std;

void moveDisk(stack<int,10> &start,stack<int,10> &finish){
	finish.push(start.pop());
}

void movetower(int n,stack<int,10> &start,stack<int,10> &finish,stack<int,10> &temp){
	if(n == 1){
		moveDisk(start,finish);
	}else{
		movetower(n-1,start,temp,finish);
		moveDisk(start,finish);
		movetower(n-1,temp,finish,start);
	}
}

int main() {
	stack<int,10> A,B,C;
	A.push(1);
	A.push(2);
	A.push(3);
	movetower(3,A,B,C);
}