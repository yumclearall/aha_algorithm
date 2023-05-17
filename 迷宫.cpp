#include <stdio.h>
char s[15][15];
int xy[4][2] = {{0,-1},{-1,0},{0,1},{1,0}};
int m = 6,n = 9;
bool book[15][15];
bool in(int x,int y){
	return (x >= 0 && y >= 0 && x < m && y < n && s[x][y] != '#' && !book[x][y]);
}
bool dfs(int x,int y){
	if (s[x][y] == 'T'){
		return true;
	}
	if(s[x][y] == '.')
		s[x][y] = 'p';
	book[x][y] = true;
	int tx,ty;
	for (int i = 0; i < 4; i++){
		tx = x + xy[i][0];
		ty = y + xy[i][1];
		if(in(tx,ty)){	
			if(dfs(tx,ty)){
				return true;
			}
		}
	}
	if(s[x][y] == 'p')
		s[x][y] = '.';
	book[x][y] = false;
	return false;
}
int main(){
//	scanf("%d%d",&m,&n);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n ; j++){
			s[i][j] = '.';
		}
	}
	s[0][1] = '#';  s[0][n - 1] = '#'; s[0][n - 2] = 'S'; s[0][n - 3] = '#'; 
	s[4][2] = '#'; s[1][4] = '#';
	s[2][2] = '#'; s[2][3] = '#'; s[2][5] = '#'; s[2][n -1] = '#'; 
	s[3][n - 2] = '#'; s[3][n - 3] = '#';
	s[4][3] = 'T'; s[5][3] = '#'; s[5][5] = '#';
	int x,y;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n ; j++){
			if (s[i][j] == 'S'){
				x = i;
				y = j;
				break;
			}
		}
	}
	if(dfs(x,y)){
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n ; j++){
				printf("%c",s[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
} 
