#include <iostream>	//3 2 166 50 30 178 60 23 132 40 15 167 50 30 178 60 23
#include <map>
#include <set>
using namespace std;
struct student{
	int h,w,a;
	bool operator<(const student &rhs) const{
		if(w == rhs.w && h == rhs.h)
			return a < rhs.a;
		else if(h == rhs.h)
			return w < rhs.w;
		else	
			return h < rhs.h; 
	}
	student(){}
	student(int h_, int w_, int a_):h(h_),w(w_),a(a_){}	
};
set<student> s ;
int main(){
	int n,m;
	cin >> n >> m;
	student std;
	int high,weight,age;
	for (int i = 0; i < n; i++){
		cin >> high >> weight >> age;
	//	std.a = age; std.h = high; std.w = weight;
		s.insert(student(high,weight,age));
	}
	for (int i = 0; i < m; i++){
		cin >> high >> weight >> age;
		std.a = age; std.h = high; std.w = weight;
		if(s.count(std))	printf("yes\n");
		else	printf("no\n");
	}
	return 0;
}
