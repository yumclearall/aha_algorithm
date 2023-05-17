#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;
int a[101],b[101]; 
int main(){
	int n,m = 0;
//	srand((unsigned int)time(NULL));
	for(int i = 0;i < 15; i++){
		n = rand() % 101;
		b[n]++;
		if(b[n] == 1){
			a[m] = n;
			m++;
		}
	}
	sort(a,a + m);
	printf("%d",a[0]);
	for(int i = 1;i < m; i++){
		printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}
