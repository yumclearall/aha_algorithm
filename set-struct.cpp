#include <iostream>	//6 5 6 1 2 2 1 3 4 1 2 1 1
#include <set>
struct node{
	int x,y;
	bool operator<(const node &rhs) const {
	if(x == rhs.x){
		return y < rhs.y;
	}else {
		return x < rhs.x;
	}
	}
};
struct point{
	int x,y;
	bool operator<(const point &rhs) const {
	if(x == rhs.x){
		return y < rhs.y;
	}else {
		return x < rhs.x;
	}
	}
};
using namespace std;
int main(){
	int n;
	set<point> p;
	cin >> n;
	for(int i = 0;i < n; i++){
		point pt;
		cin >> pt.x >> pt.y;
		p.insert(pt);
	}
	for(set<point>::iterator it = p.begin();it != p.end(); it++){
		cout << it -> x << " " << it -> y << endl;
	}
	return 0;
}
