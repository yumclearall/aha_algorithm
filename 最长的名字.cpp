#include <cstdio>
#include <cstring>
char a[105],b[105];
int maxlen; 
int main(){
	int n,len;
	scanf("%d",&n);
	for(int i = 0;i < n; i++){
		scanf("%s",&a),
		len=strlen(a);
		if(len > maxlen){
			strcpy(b,a);
			maxlen=len;
		}
	}
	printf("%s\n",b);
	return 0;
} 
