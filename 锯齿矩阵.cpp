#include <iostream>	//3 12 1 3 2 2 2 3 2 4 3 1 3 6 1 5 1 2 1 6 3 2 3 7 1 1
#include <vector>
using namespace std;
vector<int> s[10005];
int main(){
	int n,m;
	cin >> n >> m;
	int x,y;
	for(int i = 0; i < m; i++){
		cin >> x >> y;
		s[x - 1].push_back(y);
	}
	for(int j = 0; j < n; j++){
		for(int i = 0; i < s[j].size(); i++){
			cout << s[j][i];
			if(i == s[j].size() - 1)	cout << endl;
			else	cout << " ";
		}
	}
	return 0;
}
