#include <iostream>	//5 1 1 2 3 4
#include <map>
using namespace std;
map<int,int> s; 
int main(){
	int n;
	cin >> n;
	int f;
	for (int i = 0; i < n; i++){
		cin >> f;
		s[f]++;
	}
	int ans1 = 0, ans2 = 0;
	for (map<int, int>::iterator it = s.begin(); it != s.end(); it++){
		if (it -> second > ans2){
			ans1 = it -> first;
			ans2 = it -> second;
		}	
	}
	cout << ans1 << " " << ans2 << endl;
	return 0;
}
