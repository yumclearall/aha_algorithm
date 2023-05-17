#include <cstdio>	//4 20 12 1 11 
#include <iostream>
#include <algorithm>
using namespace std;
int a[20];
bool cmp(int x,int y){
	int a = x,b = y;
	int xx = 0,yy = 0;
	while(x){
		xx += x % 10;
		x /= 10;
	}
	while(y){
		yy += y % 10;
		y /= 10;
	}
	if(xx == yy)	return a < b;
	return xx < yy;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n,cmp);
	printf("%d",a[0]);
	for(int i = 1;i < n; i++){
		printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
} 
