#include <iostream>	//5 0 we 0 are 1 family 0 Family 1 Family
#include <set>
using namespace std;
set<string> eng;
void abc(string s){
	int ff = s.size();
	for(int i = 0; i < ff; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 'a' - 'A';
		}
	}
}
int main(){
	int n,d;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> d >> s;
		abc(s);
		if (d == 0)
			eng.insert(s);
		else if(d == 1){
			if(eng.count(s))
				cout << "yes\n";
			else
				cout << "no\n";
		}
	}
	return 0;
} 
