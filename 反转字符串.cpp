#include <cstdio>
#include <cstring>
char a[10000],b[10000];
int main(){
	scanf("%s",&a);
	int len = strlen(a);
	for(int i = 0;i < len; i++){
		b[len - i - 1] = a[i];
	}
	printf("%s\n",b);
	return 0;
}
