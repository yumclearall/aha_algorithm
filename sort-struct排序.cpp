#include <iostream>	//4 sedtt 98 100 97 trdf 99 96 96 sfyg 97 97 97 dtuh 100 99 99
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
struct student{
	string name;
	int score[3];
	student(){}
	student(string n, int a,int b,int c){
		name=n;
		score[0]=a;score[1]=b;score[2]=c;
	}
//	student(string n,int a,int b,int c): name(n),score[0](a),score[1](b),score[2](c) {}
}s[35];
bool cmp2(student a,student b){
	int sum1=a.score[0] + a.score[2] + a.score[1];
	int sum2=b.score[0] + b.score[2] + b.score[1];
	if(sum1 == sum2){
		return a.name < b.name;
	}
	else
		return sum1 > sum2;
}

int main(){
	int n;
	cin >> n;
	string f;
	int a,b,c;
	for(int i = 0;i < n; i++){
//		scanf("%s%d%d%d",&s[i].name,&s[i].score[0],&s[i].score[1],&s[i].score[2]);
		cin >> 	s[i].name >> s[i].score[0] >> s[i].score[1] >> s[i].score[2];
//		cin >> f >> a >> b >> c;
//		s[i](f,a,b,c);
	}
	sort(s,s+n,cmp2);
	for(int i = 0;i < n; i++){
//		printf("name: %s	score1: %d	score2: %d	score3: %d\n",s[i].name,s[i].score[0],s[i].score[1],s[i].score[2]);
		cout << "name: " << s[i].name << "	score1: " << 	s[i].score[0] << "	score2: " <<	s[i].score[1] << "	score3: " << s[i].score[2] << endl;
	}
	return 0;	}
