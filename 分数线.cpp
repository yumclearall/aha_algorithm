#include <stdio.h> //7 71 76 42 4 27 27 20
#include <algorithm>
using namespace std;
int a[105]; 
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	printf("%d",a[(n - 1) / 2]);
	int sum=0;
	for(int i = 0;i < n; i++){
		if(a[i] >= a[(n - 1) / 2])
			sum++;
	}
	printf(" %d\n",sum);
	return 0;
}
