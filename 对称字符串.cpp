#include <stdio.h>
#include <string.h>
char res[5000000];
int main(){
	int n,len=0;
	scanf("%d",&n);
	for ( int i = 0; i < n; i++){
		strcat(res + len + 1, res);
		res[len] = 'A' + i;
		len = strlen(res);
	} 
	printf("%s",res);
	return 0;
}
