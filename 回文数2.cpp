#include <iostream>	//48
using namespace std;
int rev(int i){
	int x = 0;
	while(i){
		x *= 10;
		x += i % 10;
		i /= 10;
	}
	return x;
}
int revs(int i){
	int x = 0;
	while(i){
		x += i % 10;
		i /= 10;
	}
	return x;
}
int main(){
	int n;
	cin >> n;
	bool end = false;
	for(int i = 10000;i < 1000000; i++)
		if(i == rev(i) && n == revs(i)){
			cout << i << endl;
			end = true;
		}
	if(!end)	printf("-1");
	return 0;
}
