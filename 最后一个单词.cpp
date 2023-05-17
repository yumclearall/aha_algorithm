#include <cstdio>
#include <cstring>
char a[10005],b[10005];
int main(){
	int len;
//	while(scanf("%s",&a) != EOF);
//	printf("%d",strlen(a));
	for(int i = len - 1; i >= 0; i--){
		if(a[i] != ' '){
			b[len - i - 1] = a[i];
		}else{
		break;
		}
	}
	len = strlen(b);
	printf("%d",len);
//	for(int i = len - 1; i >= 0; i--){
//		printf("%c",b[i]);
//	}
//	printf("\n");
	
	return 0;
}
