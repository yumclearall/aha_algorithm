#include <iostream>	//4 1 2 1 3 2 4
#include <vector>
using namespace std;
int ans[10];
vector<int> s[100];
int dfs(int n){
	int step = 0;
	for(int i = 0; i < s[n].size(); i++){
			step += dfs(s[n][i]);
	}
	ans[n] = step;
	return step + 1;
}
int main(){
	int n;
	cin >> n;
	int x,y;
	for (int i = 0; i < n - 1; i++){
		cin >> x >> y;
		s[x].push_back(y);
	}
	dfs(1);
	for (int i = 1; i <= n; i++)
		printf("%d\n",ans[i]);
	return 0;
}
