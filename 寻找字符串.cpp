#include <cstdio>
#include <cstring>
char a1[1005],a2[1005];
int main(){
	gets(a1);
	gets(a2);
	int la1,la2,count=0;
	la1=strlen(a1);
	la2=strlen(a2);
	for (int i = 0; i < la1 - la2 + 1; i++){
		bool judge=true;
		for (int j = 0; j < la2; j++){
			if (a1[i+j] != a2[j]){
				judge = false;
				break;
			}
		}
		if (judge)	count++;
	} 
	printf("%d",count);
	return 0;
}
