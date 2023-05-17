#include <iostream>	//5 3 9
int n,k,sum,ans;
int a[10];
void dfs(int i,int cnt,int s){
	if(i == n){
		if(cnt == k && s == sum){
			ans++;
		}
		return;
	}
	dfs(i + 1, cnt, s);
	dfs(i + 1, cnt + 1, s + a[i]);
}
using namespace std;
int main(){
	cin >> n >> k >> sum;
	for(int i = 0; i < n; i++ ){
		a[i] = i + 1;
	}
	ans = 0;
	dfs(0,0,0);
	cout << ans << endl; 
	return 0;
} 
