#include <cstdio>
#include <cstring>
using namespace std;
char s[105];
int main(){
	int len,sum=0;
	scanf("%s",&s);
	len=strlen(s);
	for(int i = 0; i < len; i++)
		if(s[i] == 'A')
			sum++;
	printf("%d",sum);
	return 0;
}
