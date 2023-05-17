#include <stdio.h>	//5 5 3
char s[16][10];
int foot[8][2] = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
void dfs(int x,int y,int step){
	if (step < 0){
	//	s[x][y] = '#';
		return;
	}
	if (x < 0 || y < 0 || x >= 16 || y >= 10)
		return;
	
	s[x][y] = '#';
	for (int i = 0; i < 8; i++){
		dfs(x + foot[i][0],y + foot[i][1],step - 1);
	}
}
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	for(int i = 0; i < 16; i++){
		for (int j = 0; j < 10; j++){
			s[i][j] = '.';
		}
	}
	dfs(a,b,c);
	for(int i = 0; i < 16; i++){
		for (int j = 0; j < 10; j++){
			printf("%c",s[i][j]);
		}
		printf("\n");
	} 
	return 0;
}
