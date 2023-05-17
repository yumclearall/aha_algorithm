#include <iostream>	//5 apple shandong 3 pineapple guangdong 1 sugarcane guangdong 1 pineapple guangdong 3 pineapple guangdong 1
#include <map>
#include <string>
using namespace std;
map <string, map<string, int> > s; 
int main(){
	int n,p;
	cin >> n;
	string pro,shu;
	for (int i = 0; i < n ;i++){
		cin >> shu >> pro >> p;
		s[pro][shu] += p;
	}
	for (map<string, map<string, int> >::iterator it1 = s.begin(); it1 != s.end(); it1++){
		cout << it1 -> first << endl;
		for (map<string, int>::iterator it2 = it1 -> second.begin(); it2 != it1 -> second.end(); it2++){
			cout << "	----->" << it2 ->first << "(" << it2 -> second << ")" << endl;
		}
	}
	return 0;
}
