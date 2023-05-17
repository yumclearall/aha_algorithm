#include <iostream>
#include <map>
#include <string>
#include <set>
using namespace std;
int main(){
	map<string,int> m;
	m.insert(make_pair("tom",1));
	m.insert(make_pair("jone",2));
	cout << m["tom"] << " and " << m["jone"] << endl;
	m.insert(make_pair("marry",1));
	if (m.count("marry")){
		cout << "marry is in class " << m["marry"] << endl << endl;
	}
	m["jim"] = 2;
	for (map<string, int>::iterator it = m.begin(); it != m.end(); it++){
		cout << it -> first << " is in class " << (*it).second << endl;
	}
	
	map<int, set<string> > cs;
	cs[2].insert("yuhaoran");
	if(cs[2].count("yuhaoran"))
		cout << endl << "yuhaoran is in class 2" << endl;
	cs[2].erase("yuhaoran");
	
	map<int, map<string, int> > s;
	s[2]["yhr"]++;
	s[2]["yhr"]++;
	return 0;
}

