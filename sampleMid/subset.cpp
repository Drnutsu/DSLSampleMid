#include <iostream>
#include <string>

using namespace std;

void subset(string sofar,string rest){
	if(rest.empty()){
		cout << sofar << endl;
	}else{
		subset(sofar + rest[0],rest.substr(1)); // �ó���ҡ�ӡ������ѡ�õ���á�ͧ rest �� sofar �������ѡ�õ���á�ͧ rest �͡���¡�͹�觵��� level ����
		subset(sofar,rest.substr(1)); //�ó������� ����͹��ҧ��������觤�ҷ���͡�ҡ rest �
	}
}
/*
int main() {
	subset("","abcd");
}*/