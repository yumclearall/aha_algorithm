#include <iostream>	//1 2 1 1 2
#include <set>
using namespace std;
set<int> s; 
int main(){
	int n,m,cnt = 0;
	cin >> n >> m;
	int f; 
	for (int i = 0; i < n + m; i++){
		cin >> f;
		s.insert(f);
	}
	for (set<int>::iterator it = s.begin(); it != s.end(); it++){
		cout << *it;
		cnt++;
		if(cnt != s.size())
			cout << " ";
		else
			cout << endl;
	}
	return 0;
}
