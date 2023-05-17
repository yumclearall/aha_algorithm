#include <iostream>	//6 1 zgh 2 yhr 1 bar 2 yhr 100 xx 50 x
#include <string>
#include <map>
using namespace std;
int main(){
	map<int, map<string, int> > s;
	int n,class_id;
	string name;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> class_id >> name;
		s[class_id][name]++;
	} 
	for (map<int, map<string, int> >::iterator it = s.begin(); it != s.end(); it++){
		for (map<string, int>::iterator its = it -> second.begin(); its != it -> second.end(); its++){
			cout << "there are " << its -> second << " " << its -> first << " in class " << it -> first << endl;
		}
	}
	return 0;
}
