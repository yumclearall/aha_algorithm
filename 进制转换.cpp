#include <stdio.h>	//23 12
char end[10];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(n < 0){
		printf("-");
		n = -n;
	}
	int f = 0,ns;
	while(n){
		ns = n % m;
		if(ns >= 10)	end[f++] = 'A' + ns - 10;
		else			end[f++] = ns + '0';
		n /= m;	
	}
	for(int i = f - 1;i >= 0; i--){
		printf("%c",end[i]);
	}
	printf("\n");
	return 0;
} 
