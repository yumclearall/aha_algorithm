#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i = 0; i <n; i++){
		string space =string(n-i-1,' ');
		string ch=string(2*i+1,'A'+i);
		cout << space + ch << endl;
	}
	return 0;
}
