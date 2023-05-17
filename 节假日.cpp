#include <stdio.h>
int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int month[10]={1,5,10,10,10,12};
int day[10]={1,1,1,2,3,1};
int main(){
	int y,week;
	scanf("%d%d",&y,&week);
	for(int i = 0; i < 4; i++){
		scanf("%d%d",&month[i+6],&day[i+6]);
	}
	if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		m[1]=29;
	else
		m[1]=28;
	int	fy=1,fx=1,fm=0,holiday=0;
	while(fy < 13){
		if(fy == month[6] && fx == day[6]){
			fm++;
			holiday=2;
		}
		else if(holiday){
			fm++;
			holiday--;
		}
		else if(week == 6 || week == 7)
			fm++;
		else {
			for(int i = 0; i < 10; i++){
				if(fx == day[i] && fy == month[i]){
					fm++;
					break;
				}
			}
		}
		week++;
		if(week > 7)	week = 1;
		fx++;
		if(fx > m[fy - 1]){
			fy++;
			fx=1;
		}
	}
	printf("%d\n",fm);
	return 0;
}
/*2017 7
1 28
4 4
5 30
10 4*/
