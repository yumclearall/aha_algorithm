#include <iostream>	//10 back -9 left 3 left 8 back 15 right 10 right -7 right -3 left 11 right 17 left 3
using namespace std;
int x[105],y[105];
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
using namespace std;
int main(){
	int n,lone,zero = 0,i = 1;
	char dirs[10];
	cin >> n;
	while(i <= n){
		cin >> dirs >> lone;
		if(dirs[0] == 'l') zero = (zero + 1) % 4;
		else if(dirs[0] == 'b') zero = (zero + 2) % 4;
		else if(dirs[0] == 'r') zero = (zero + 3) % 4;
		x[i] += dir[zero][0] * lone + x[i - 1];
		y[i] += dir[zero][1] * lone + y[i - 1];
		i++;
	}
	printf("%d %d",x[i - 1],y[i - 1]);
	return 0;
}
