#include <iostream>	//3 3 2 -4 1 -1 2 1 4 -2 2
using namespace std;
int s[10][10];
int main(){
	int n,m,max = 0;
	cin >> n >> m;
	for(int i = 0;i < n; i++){
		for(int j = 0;j < m; j++){
			cin >> s[i][j];
		}
	} 
	for(int a = 0;a < n; a++){
		int sum = 0;
		for(int b = a; b < n; b++){
			for(int c = 0;c < m; c++){
				for(int d = c;d < m; d++){
					int sum = 0;
					for(int p = a;p <= b; p++){
						for(int q = c;q <=d; q++){
							sum += s[p][q];
						}
						if(sum > max)	max = sum;
					}
				}
			}
		}
	}
	printf("%d\n",max);
	return 0;
}
