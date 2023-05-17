#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<string> s[2]; 
int main(){
	int n;
	cin >> n;
	string net;
	char op[20];
	bool jud = true;
	for (int i = 0; i < n; i++){
		cin >> op;
		if (op[0] == 'V'){
			cin >> net;
			while(!s[1].empty()){
				s[1].pop();
			}
			s[0].push(net);
		}
		else if (op[0] == 'B' && s[0].size() > 1){
			string f =(s[0].top());
			s[1].push(f);
			s[0].pop();
		}
		else if (op[0] == 'F' && !s[1].empty()){
			string f =(s[1].top());
			s[0].push(f);
			s[1].pop();
		}
		else{
			jud = false;
			cout << "Ignore" << endl;
		}
		if (jud)
			cout << s[0].top() << endl;
		jud = true;
	}
	return 0;
}
/*
10
VISIT https://www.jisuanke.com/course/476
VISIT https://www.taobao.com/s 
BACK
BACK
FORWARD
FORWARD
BACK
VISIT https://www.jisuanke.com/course/429
FORWARD
BACK
*/

/*
10 VISIT https://www.jisuanke.com/course/476 VISIT https://www.taobao.com/s BACK BACK FORWARD FORWARD BACK VISIT https://www.jisuanke.com/course/429 FORWARD BACK
*/
