#include <iostream>	//5 1 3 2 5 4
#include <stack>	 //5 1 5 3 2 4
#include <vector>
using namespace std;
int main(){
	stack<string> s;
	s.push("123456");
	s.push("aaaa");
	s.push("bb");
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	stack<int> jud;
	int cur = 0,f = 1;
	for (int i = 0; i < n; i++){
		while ((jud.empty() || jud.top() != a[i]) && cur <= n){
			jud.push(cur);
			cur++;
		}
		if (jud.empty() || jud.top() != a[i]){
			f = 0;
			break;
		}else{
			cout << jud.top() << " ";
			jud.pop();
		}
	}
	cout << endl;
	if (f){
		cout << "legal" << endl;
	}else{
		cout << "illegal" << endl;
	}
	return 0;
}
