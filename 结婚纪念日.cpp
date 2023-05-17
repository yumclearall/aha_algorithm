#include <stdio.h>
int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
	int y,m,d,n;
	scanf("%d%d%d",&y,&m,&d);
	scanf("%d",&n);
	if((y % 4 == 0 && y % 100 != 0) || y % 100 == 0)
		month[1] = 29;
	else
		month[1] = 28;
	while(n != 0){		
		d++;
		if(d > month[m-1]){
			m++;
			d = 1;
		}
		if(m > 12){
			y++;
			m = 1;
		}
		n--;
	} 
	printf("%d-%02d-%02d",y,m,d);
	return 0;
}
