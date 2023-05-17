#include <iostream>	//3 100 1 2 -1 2 1 2
using namespace std;
int ans,n,m;
int k[10],p[10];
long long pows(int x, int p){
	int sum = 1;
	for (int i = 0; i < p; i++){
		sum *= x;
	}
	return sum;
}
void dfs(int x, long long s){
	if(x == n){
		if(s == 0){
			ans++;
		}
		return;
	}
	for (int i = 1; i <= m; i++){
		dfs(x + 1,s + pows(i, p[x]) * k[x]);
	}
}
int main(){
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> k[i] >> p[i];
	}
	dfs(0,0);
	cout << ans << endl;
	return 0;
} 
