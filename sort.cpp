#include <iostream>	//3 5 8 45 6 3 7 8 5 6
#include <algorithm>
using namespace std;
bool cmp1(int x,int y){
	return x >= y;
}

struct student{
	string name;
	int score[3];
	student(){}
	student(string n, int a,int b,int c){
		name=n;
		score[0]=a;score[1]=b;score[2]=c;
	}
//	student(string n,int a,int b,int c): name(n),score[0](a),score[1](b),score[2](c) {}
};

bool cmp2(student a,student b){
	int sum1=a.score[0] + a.score[2] + a.score[1];
	int sum2=b.score[0] + b.score[2] + b.score[1];
	return sum1 > sum2;
}
int main(){
	int arr[10];
	for(int i = 0;i < 10; i++){
		cin >> arr[i];
	} 
	sort(arr,arr + 10,cmp1);
	for(int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	sort(arr,arr + 10);
	for(int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	sort(arr,arr + 10,greater<int>());
	for(int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
