#include <iostream>
using namespace std;
int n;
int peach(int x){
	if (x == n)
		return 1;
	else
		return ((peach(x + 1) + 1) * 2);
}
int main(){
	cin >> n;
	cout << peach(1); 
	return 0;
}
