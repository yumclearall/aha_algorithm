#include <cstdio> //6 1 3 2 4 8 3 1 6 9 2
#include <algorithm>
#include <iostream>
using namespace std;
int s[10];
int main(){
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	for(int i = 0;i < a; i++){
		scanf("%d",&s[i]);
	}
	sort(s + b - 1,s + c);
	sort(s + d - 1,s + e, greater<int>());
	printf("%d",s[0]);
	for(int i = 1;i < a; i++){
		printf(" %d",s[i]);
	}
	printf("\n");
	return 0;
}
