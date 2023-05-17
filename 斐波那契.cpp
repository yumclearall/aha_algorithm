#include <cstdio>
long int s[100005];
long int mod = 1e9 + 7;
int main(){
	int n;
	scanf("%d",&n);
	s[0] = 1;	s[1] = 1;
	for(int i = 2;i < n; i++){
		s[i] = (s[i - 1] % mod + s[i - 2] % mod) % mod;
	} 
	printf("%d\n",s[n - 1]);
	return 0; 
}

