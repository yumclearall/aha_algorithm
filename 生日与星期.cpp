#include <iostream>
#include <string>
using namespace std;
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int whatday(int y,int m,int d) {
	int end = 0;
	while (y != 1){
		if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
		end += 366 % 7;		}
		else	end += 365 % 7;
		end %= 7;
		y--;	
	}
	if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
			month[1] = 29;
		else
			month[1] = 28;
	while(m != 1){
		end += month[m-2] % 7;
		end %= 7;
		m--;
	}
	end = (end + d - 1) % 7;
	return end; 
	
}
string weekday[7]={"Monday","Tuesday","Wednesday","Thursday","Firday","Saturday","Sunday"};
int main(){
	int y,m,d;
	cin >> y >> m >> d;
	cout << weekday[whatday(y,m,d)];
	return 0;
}
