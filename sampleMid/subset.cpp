#include <iostream>
#include <string>

using namespace std;

void subset(string sofar,string rest){
	if(rest.empty()){
		cout << sofar << endl;
	}else{
		subset(sofar + rest[0],rest.substr(1)); // กรณีเอาก็ทำการใส่อักษรตัวแรกของ rest ไปใน sofar และเอาอักษรตัวแรกของ rest ออกด้วยก่อนส่งต่อไป level ต่อไป
		subset(sofar,rest.substr(1)); //กรณีไม่เอา เหมือนข้างบนแต่ไม่ส่งค่าที่ออกจาก rest ไป
	}
}

int main() {
	subset("","abcd");
}