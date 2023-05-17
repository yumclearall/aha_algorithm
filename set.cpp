#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
	set<string> country;
	country.insert("China");
	country.insert("America");
	country.insert("France");
	if(country.count("China"));
		cout << "China belong to country" << endl;
	for(set<string>::iterator it = country.begin(); it != country.end(); it++){
		cout << *it << endl;
	}
	country.clear();
	cout << country.size() << endl;
	int a[6] = {10,2,3,4,2,10};
	set<int> s;
	for(int i = 0;i < 6; i++){
		s.insert(a[i]);
	}
	int sum = 0;
	
	s.erase(10);
	
	for(set<int>::iterator it = s.begin(); it != s.end(); it++){
		cout << *it << " ";
		sum += *it;
	}
	cout << endl << "sum = " << sum << endl;
	return 0;
}
