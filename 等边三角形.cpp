#include <cstdio>	//5
int sum,n;
int a[10];
bool book[10],f;
void dfs(int p,int s,int cnt){
	if (f)	return;
	if (p == 3){
		f = true;
		return;
	}
	if (s == sum / 3){
		dfs(p + 1, 0, 0);
		return;
	}
	for (int i = 0; i < n; i++){
		if(!book[i]){
			book[i] = true;
			dfs(p, s + a[i], cnt + 1);
			book[i] = false;
		}
	}
}
int main(){
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		a[i] = i + 1;
	//	scanf("%d",&a[i]);
		sum += a[i];
	}
	if(sum % 3 != 0){
		printf("no\n");
	}
	else{
		dfs(0, 0, 0);
		if(f){
			printf("yes\n");
		}else {
			printf("no\n");
		}
	}
	return 0;
}
