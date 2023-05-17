#include <cstdio>
int s[10][10] = {{0,0,0,1,0},{0,0,0,1,0},{0,1,0,0,1},{1,0,0,0,1},{0,1,0,0,0}};
int ans = 999,sum;
void boom(int x, int y){
	for(int i = 0; i < 5; i++){
		s[x][i] += 2;
	}
	for(int i = 0; i < 5; i++){
		s[i][y] += 2;
	}
}
void reboom(int x, int y){
	for(int i = 0; i < 5; i++){
		s[x][i] -= 2;
	}
	for(int i = 0; i < 5; i++){
		s[i][y] -= 2;
	}
}
void dfs(int x, int y){
	if(x == 5){
		int m = 0;
		for (int i = 0; i < 5; i++){
			for (int j = 0; j < 5; j++){
				if(s[i][j] == 1){
					m = 1;
					break;
				}
			} 
		}
		if(m == 0) {
			if (ans > sum){
				ans = sum;
			}
		}
		return;
	}
	if(y == 5){
		dfs(x + 1, 0);
		return;
	}
	if(s[x][y] == 1){
		boom(x, y);
		printf("%d %d\n",x, y);
		sum++;
		dfs(x,y + 1);
		sum--;
		reboom(x, y);
	}else if(s[x][y] != 1 && s[x][y] % 2 == 1){
		boom(x, y);
		dfs(x,y + 1);
		reboom(x, y);
	}
	dfs(x,y + 1);
}
int main(){
	dfs(0, 0);
	printf("%d\n",ans);
	return 0;
}
