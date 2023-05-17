#include <stdio.h>
#include <cstring>
char s[10005];
int main(){
	int len,end;
	scanf("%s",&s);
	len = strlen(s);
	end = (s[len - 1] - '0') % 2;
	if(!end){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}
