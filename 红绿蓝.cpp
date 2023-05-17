#include <cstdio>	//rggbbb
#include <cstring>
#include <algorithm>
using namespace std;
char rgb[100]; 
int main(){
	scanf("%s",&rgb);
	int r = 0,g = 0,b = 0,len;
	len = strlen(rgb);
	for(int i = 0;i < len; i++){
		if(rgb[i] == 'r')	r++;
		else if(rgb[i] == 'g')	g++;
		else if(rgb[i] == 'b')	b++;
	}
	sort(rgb,rgb + len);
	printf("%s",rgb);
	int sum = r;
	if(sum > g / 2)	sum = g / 2;
	if(sum > b / 3)	sum = b / 3;	
	printf("\n%d\n",sum);
	return 0;
}
