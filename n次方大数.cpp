#include <cstdio>	//2 10 10000
long long dfs(long long x, long long y, long long p){
	if (y == 0){
		return 1 % p;
	}
	else{
		long long temp = dfs(x, y / 2, p);
		if (y % 2 == 0)
			return temp * temp % p;
		else
			return temp * temp % p * x % p;
	}
} 
int main(){
	long long a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	printf("%lld\n",dfs(a,b,c));
}
