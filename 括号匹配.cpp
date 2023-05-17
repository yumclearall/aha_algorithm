#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
stack<char> s;
char f[20];
using namespace std;
int main(){
	cin >> f;
	bool n = true;
	int len = strlen(f);
	for (int i = 0; i < len; i++){
		if (f[i] == '('){
			s.push(f[i]);
		}else if (!s.empty() && f[i] == ')'){
			s.pop();
		}else {
			n = false;
			break;
		}
	}
	if (n == false)
		cout << "no\n";
	else if (s.empty())
		cout << "yes\n";
	else
		cout << "no\n";
	return 0;
}
