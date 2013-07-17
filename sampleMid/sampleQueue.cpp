#include <iostream>

using namespace std;

template <typename type,int size>
class queue{
private:
	type arr[size];  
	int front;
	int back;
	int count;
public:
	queue(){
		back = size-1;
		front = back;
		count = 0;
	}
	void enqueue(type input){
		if(count != size){
			arr[back] = input;
			back = (back+1)%size;
			count++;
		}else{
			cerr << "your stack is full" << endl;
		}
	}
	type dequeue(){
		type temp = arr[front];
		if(count == 0){
			cerr << "your queue is empty ";
			return 0;
		}else{
			front = (front+1)%size;
			count--;
			return temp;
		}
	}
};

int main() {
	queue<int,10> q1;
	cout << q1.dequeue() << endl;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);
	q1.enqueue(6);
	q1.enqueue(7);
	q1.enqueue(8);
	q1.enqueue(9);
	q1.enqueue(10);
	for(int i = 0;i < 10;i++){
		cout << q1.dequeue() <<endl;
	}
}