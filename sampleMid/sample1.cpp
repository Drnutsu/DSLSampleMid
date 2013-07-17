#include <iostream>

using namespace std;

template<class T, int MAX=20>
class stack{
public:
	T item[MAX];
	int top;
	stack(){
		top = -1;
		for(int i = 0;i < MAX;i++){
			item[i] = 0;
		}
	}
	void push(const T& i){if (top<MAX-1) item[++top] = i;}
	T pop(){if (top!=-1) return item[top--];}

	void print(){
		for(int i=0;i<=top;i++){
			cout<<item[i]<<" ";
		}
		cout<<"\n";
	}

	void addItem(stack<T,10> s2,stack<T,10> &s3){
		if(top > s2.top){
			for(int i = 0;i <= top;i++){
				s3.item[i] = s2.item[i] + item[i];
			}
			s3.top = top;
		}else if(top <= s2.top){
			for(int i = 0;i <= s2.top;i++){
				s3.item[i] = s2.item[i] + item[i];
			}
			s3.top = s2.top;
		}
	}
};
/*
int main() {
	cout<<"----addItem---\n";
	stack<int,10> s1,s2,s3,s4; //  ·µ°¢Õß int ¢π“¥ 10
	for(int i=0; i<5; i++)
		s1.push(i);
	cout<<"s1: "; s1.print();
	for(int i=0; i<7; i++)
		s2.push(i);
	cout<<"s2: "; s2.print();
	cout<<"s3: "; s3.print();
	cout<<"s4: "; s4.print();
	s1.addItem(s2,s3); cout<<"s1.addItem(s2,s3); s3: ";
	s3.print();
	s4.addItem(s1,s3); cout<<"s4.addItem(s1,s3); s3: ";
	s3.print();
	s4.addItem(s4,s3); cout<<"s4.addItem(s4,s3); s3: ";
	s3.print();
	s2.addItem(s2,s3); cout<<"s2.addItem(s2,s3); s3: ";
	s3.print();
}*/