#include <iostream>

using namespace std;

bool ok(int* table,int i){
	for(int k = 0;k < i;k++){
		if(table[k]==table[i] || (abs(table[k]- table[i]) == i-k))return false; //�������������ѡ i ���ǡѺ����ŧ�������� ���� ������繤�ҷ��������ǹ͹���ǡѹ����
		                                                                        //����¡�����������᡹ i ���ͧ�ҡ table ���纤����§���˹�᡹ j �ͧ���� i
	}
	return true;
}

void move(int* table,int i){
	if(i == 4){
		cout << "slove solution!" << endl; 
		for(int k = 0;k < 4;k++){
			cout << "paste queen at i: " << k << " j : " << table[k] << endl;   
		}
		return;
	}
	for(int j = 0;j < 4;j++){
		table[i] = j;
		if(ok(table,i)) move(table,i+1);
	}
}
/*
int main() {
	int table[4];
	move(table,0);
}*/