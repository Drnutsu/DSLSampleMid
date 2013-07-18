#include <iostream>

using namespace std;

struct node{
	int data;
	node* link;
	node(){
		this->link = nullptr;
	}
	node(int input){
		this->data = input;
		this->link = nullptr;
	}
};

node* shuffle(node *h1,node *h2,bool direct){
	if(h1 == nullptr) return h2;
	if(h2 == nullptr) return h1;
	if(direct){
		h1->link = shuffle(h1->link,h2,!direct);
		return h1;
	}else{
		h2->link = shuffle(h1,h2->link,!direct);
		return h2;
	}
}
/*
int main() {
	node *h1 = new node();
	node *cp1 = h1;
	for(int i = 1;i <= 7;i++){
		cp1->link = new node(i);
		cp1 = cp1->link;
	}
	h1 = h1->link;
	node *h2 = new node();
	node *cp2 = h2;
	for(int j = 8;j <= 10;j++){
		cp2->link = new node(j);
		cp2 = cp2->link;
	}
	h2 = h2->link;
	node *ans;
	ans = shuffle(h1,h2,true);
}*/