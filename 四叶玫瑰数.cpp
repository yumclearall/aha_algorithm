#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	bool end = false;
	for(int i = 1000;i <= 9999; i++){
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100 % 10;
		d = i / 1000 % 10;
		if(a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d == i){
			cout << i << endl;
			end = true;
		}	
	} 
	if(!end)	printf("-1");
	return 0;
}
