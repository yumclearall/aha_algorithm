#include <stdio.h>
int main(){
//	//4
//	char s;
//	scanf("%c",&s);
//	printf("%c %d\n",s + 32,s + 32);
//	//5
//	int n;
//	scanf("%d",&n);
//	if (n % 2 == 0){
//		printf("Å¼Êı");
//	}
//	else{
//		printf("ÆæÊı");
//	}
//	//6
//	scanf("\n");
	int a,b,c,sum,rem;
	float aver;
	printf("enter three integer: ");
	scanf("%d%d%d",&a,&b,&c);
	sum = a + b + c;
	rem = sum / 3 % 3;
	aver = (float)sum / 3;
	printf("sum = %4d\n",sum);
	printf("aver = %.2f	rem = %3d\n",aver,rem);
	return 0;
} 
