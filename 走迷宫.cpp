#include <cstdio>
char mg[10][10] = {"....S*",".***..",".*..*.","*.***.",".T...."}; 
bool book[10][10];
bool dfs(int x, int y){
	if (mg[x][y] == 'T'){
		return true;
	}
	int tx = x, ty = y + 1;
	tx = x;	ty = y - 1;
	tx = x + 1;	ty = y;
	tx = x - 1;	ty = y;
}
int main(){
	int n,m,x,y;
	scanf("%d%d",&n,&m);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (mg[i][j] == 'S'){
				x = i;
				y = j;
				book[i][j] = true;
				break;
			}
		}
	}
	dfs(x,y);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("%d",mg[i][j]);
			if (i != n - 1)
				printf(" ");
			else
				printf("\n");
		}
	}
	return 0;
}
