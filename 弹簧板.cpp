#include <iostream>	//5 2 2 3 1 2 1 2 3 4 1
#include <algorithm>
using namespace std;	//5 3 2 2 2 2 1 5 6 7 8
int a[205],b[205],ans = 999999,n;
void dfs(int x, int sum){
	if (x >= n){
		if (ans > sum)
			ans = sum;
		return;
	}
	dfs(x + a[x], sum + 1);
	dfs(x + b[x], sum + 1);
}
int abf[205];
bool vis[205];
int f(int x){
	if(x >= n){
		return 0;
	}
	if(vis[x]){
		return abf[x];
	}
	vis[x] = true;
	return abf[x] = min(f(x + a[x]), f(x + b[x])) + 1;
}
int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}
	dfs(0, 0);
	cout << ans << endl;
	cout << f(0) << endl;
	return 0;
}
