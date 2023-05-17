#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 1;i < 100; i++){
		if(i * i > n)	continue;
		for(int j = i + 1; j < 100; j++){
			if(i * i + j * j > n)	continue;
			for(int k = j + 1;k < 100; k++){
				if(i * i + j * j + k * k > n)	continue;
				else if(i * i + j * j + k * k == n)
					printf("%d %d %d\n",i,j,k);
			}
		}
	}
	return 0;
} 
