#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int f(int m,int n){
	vector<int> v;
	m = m % n;
	for (;;){
		v.push_back(m);
		m *= 10;
		m = m%n;
		if(m == 0) return 0;
		if(find(v.begin(),v.end(),m) != v.end()){
			return (int)(v.end()-find(v.begin(),v.end(),m));
		}
	}
} 
int main(){
	int m,n;
	cin >> m >> n;
	cout << f(m,n) <<endl;
	return 0;
}
