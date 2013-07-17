#include <iostream>

using namespace std;

template <typename type>
struct node{
	type data;
	node *link;
};

template <typename type>
void print(node<type> *in){
	node<int> *p = in;
	while(p != nullptr){
		cout << p->data << " ";
		p = p->link;
	}
	cout << endl;
}

template <typename type>
node<type>* merge(node<type> *h1,node<type> *h2){
	if(h1 == nullptr) return h2;
	if(h2 == nullptr) return h1;
	if(h1->data < h2->data){
		h1->link = merge(h1->link,h2);
		return h1;
	}else{
		h2->link = merge(h2->link,h1);
		return h2;
	}
}

template <typename type>
int count(node<type> *in){
	int count = 0;
	node<type> *i = in;
	while(i != nullptr){
		count++;
		i = i->link;
	}
	return count;
}

node<int>* loopMerge(node<int> *h1,node<int> *h2){
	
	if(count(h1) < count(h2)){
		node<int> *temp = h1;
		h1 = h2;
		h2 = temp;
	}

	node<int> *s1 = h1;
	node<int> *s2 = h2;
	node<int>* c;
	node<int>* c2;
	while(h1->link != nullptr && h2->link != nullptr){
		while(h1->data < h2->data){
			c = h1;
			h1 = h1->link;
		}
		c->link = h2;
		c = h2->link;
		h2->link = h1;
		c2 = h2;
		h2 = c;

	}

	if(c->data > c2->data && c->data < h1->data){
		c2->link = c;
		c->link = h1;
	}

	h1 = s1;
	h2 = s2;
	return s1;
}
/*
int main() {
	cout << "--- create & print list ------\n";
	int a1[] = {1,3,5,6,9,10}; 
	int a2[] = {2,4,7,8};
	node<int> *h1,*h2; // point head
	node<int> *c1,*c2; // point before 
	node<int> *s1,*s2; // point new
	s1 = h1 = c1 = new node<int>;
	int size1 = 0;
	for(int i = 0;i < sizeof(a1)/sizeof(a1[0]) ;i++){
		s1 = new node<int>;
		s1->data = a1[i];
		s1->link = nullptr;
		c1->link = s1;
		c1 = c1->link;
		size1++;
	}
	h1 = h1->link;
	s2 = h2 = c2 = new node<int>;
	int size2 = 0;
	for(int i = 0;i < sizeof(a2)/sizeof(a2[0]);i++){
		s2 = new node<int>;
		s2->data = a2[i];
		s2->link = nullptr;
		c2->link = s2;
		c2 = c2->link;
		size2++;
	}
	h2 = h2->link;
	print(h1);
	print(h2);
	node<int> *total = loopMerge(h2,h1);
	print(total);
}*/