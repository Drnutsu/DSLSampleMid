#include <iostream>
#include <string>
using namespace std;

void permute(string sofar,string rest){
	if(!rest.empty()){
		for(int i = 0;i < rest.length();i++){
			string newRest = rest.substr(0,i) + rest.substr(i+1); // เอาตัวหน้าตัว i และหลังตัว i มารวมกันทั้งหมดเพื่อให้ rest เป็น rest ที่ตัดตัวที่ i ออก
			permute(sofar + rest[i],newRest);
		}
	}else cout << sofar << endl;
}
/*
int main() {
	string puzzle = "abcd";
	permute("",puzzle);
}*/