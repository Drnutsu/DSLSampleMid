#include <iostream>
#include <string>
using namespace std;

void permute(string sofar,string rest){
	if(!rest.empty()){
		for(int i = 0;i < rest.length();i++){
			string newRest = rest.substr(0,i) + rest.substr(i+1); // ��ҵ��˹�ҵ�� i �����ѧ��� i ������ѹ������������� rest �� rest ���Ѵ��Ƿ�� i �͡
			permute(sofar + rest[i],newRest);
		}
	}else cout << sofar << endl;
}
/*
int main() {
	string puzzle = "abcd";
	permute("",puzzle);
}*/