#include <iostream>	//4 English Math Chinese Chinese
#include <map>
#include <string>
using namespace std;
map<string, int> lib;
int main(){
	int n;
	cin >> n;
	string ss;
	for(int i = 0; i < n; i++){
		cin >> ss;
		lib[ss]++;
	}
	cout << lib.size() << endl;
	for(map<string ,int>::iterator it = lib.begin(); it != lib.end(); it++){
		cout << it -> second << " " << it -> first << endl;
	}
	return 0;
} 
