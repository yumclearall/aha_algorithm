#include <iostream>	//4 4 3 1 4 3 2 4 2 2
#include <vector>
using namespace std;
vector<int> s[10005]; 
int main(){
	int n,m,a,b;
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		s[i].push_back(i);
	}
	for (int i = 0 ;i < m; i++){
		cin >> a >> b;
		if(a == b)
			continue;
		else{
			for(int j = 0; j < s[b].size(); j++){
				s[a].push_back(s[b][j]);
			}
			vector<int>().swap(s[b]);
		}
	}
	for (int i = 1; i <= n; i++){
		for(int j = 0; j < s[i].size(); j++){
			cout << s[i][j];
			if(j != s[i].size() - 1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
