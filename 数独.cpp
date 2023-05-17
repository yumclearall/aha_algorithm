#include <cstdio>
int a[10][10] = {0}; 
bool vx[10][10],vy[10][10],vv[10][10];
bool f;
void dfs(int x, int y){
	//printf("%d %d\n",x,y);
	if(f)	return;
	if(x == 9){
		f = true;
		for (int i = 0; i < 9; i++){
			for(int j = 0; j < 9; j++){
				if(j == 8)	printf("%d\n",a[i][j]);
				else	printf("%d ",a[i][j]);	
		}}
		return;
	}
	if(y == 9){
		dfs(x + 1, 0);
		return;
	}
	if(a[x][y] != 0){
		dfs(x, y + 1);
		return;
	}
	for (int i = 1; i <= 9; i++){
		if(!vx[x][i] && !vy[y][i] && !vv[x / 3 * 3 + y / 3][i]){
			a[x][y] = i;
			vx[x][i] = true;
			vy[y][i] = true;
			vv[x / 3 * 3 + y / 3][i] = true;
		//	printf("%d %d %d\n",x,y,i);
			dfs(x,y + 1);
			a[x][y] = 0;
			vx[x][i] = false;
			vy[y][i] = false;
			vv[x / 3 * 3 + y / 3][i] = false;
		}
	}
}
int main(){
	a[0][1] = 2; a[0][2] = 6;
	a[1][3] = 5; a[1][5] = 2; a[1][8] = 4;
	a[2][3] = 1; a[2][8] = 7;
	a[3][1] = 3; a[3][4] = 2; a[3][6] = 1; a[3][7] = 8;
	a[4][3] = 3; a[4][5] = 9;
	a[5][1] = 5; a[5][2] = 4; a[5][4] = 1; a[5][7] = 7;
	a[6][0] = 5; a[6][5] = 1;
	a[7][0] = 6; a[7][3] = 9; a[7][5] = 7;
	a[8][6] = 7; a[8][7] = 5;
	for (int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			//printf("%2d",a[i][j]);
			if(a[i][j] != 0){
				vx[i][a[i][j]] = true;
				vy[j][a[i][j]] = true;
				vv[i / 3 * 3 + j / 3][a[i][j]] = true;
			}
		}
		//printf("\n");
	}
	dfs(0,0);
	return 0;
}
