#include <iostream>	//5 3 9
using namespace std;
int n,k,sum,ans = 0,a[10];
bool book[10];
void dfs(int s,int cnt){
	if(cnt == k){
		if(s == sum){
			ans++;
		}
		return;
	}
	for(int i = 0; i < n; i++){
		if(!book[i]){
			book[i] = true;
			dfs(s + a[i],cnt + 1);
			book[i] = false;
		}
	}
}
int main(){
	cin >> n >> k >> sum;
	for(int i = 0; i < n; i++){
		a[i] = i + 1;
	}
	dfs(0,0);
	cout << ans << endl;
	return 0;
}
