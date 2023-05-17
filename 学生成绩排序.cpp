#include <cstdio>	//5 a 97 b 68 c 51 d 85 e 73
#include <algorithm>
#include <iostream>
using namespace std; 
struct student{
	string name;
	int score;
	student(){}
	student(char n[10],int s):name(n),score(s){}
	
}st[10];
bool cmp(student x,student y){
	return x.score > y.score;
}
int main(){
	int n;
	char nm[10];
	scanf("%d",&n);
	for(int i = 0;i < n; i++){
		scanf("%s%d",&nm,&st[i].score);
		st[i].name=nm;
	}
	sort(st,st + n,cmp);
	
	for(int i = 0;i < n; i++){
		cout << "name: " << st[i].name << "	";
		printf("score: %d\n",st[i].score);
	}
	return 0;
}
