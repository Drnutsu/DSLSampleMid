#include <iostream>

using namespace std;

int sum(int *arr,int index,int size){
	if(index != size-1){
		return arr[index] + sum(arr,index+1,size);
	}else return arr[index];
}

int max(int *arr,int index,int size){
	if(index != size-1){
		int num = max(arr,index+1,size);
		if(num > arr[index]){
			return num;
		}else return arr[index];
	}else return arr[index];
}

/*int main() {
	int a[5]={4,5,2,9,7};
	int b[3]={10,50,30};
	cout<<"sum a = "<<sum(a,0,5)<<endl;
	cout<<"sum b = "<<sum(b,0,3)<<endl;
	cout<<"max a = "<<max(a,0,5)<<endl;
	cout<<"max b = "<<max(b,0,3)<<endl;
}*/