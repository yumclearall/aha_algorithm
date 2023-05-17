#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n = 5;
	vector<vector<int> > vec2;
	for(int i = 0;i < n; i++){
		vector<int> x(i + 1,1);
		vec2.push_back(x);
	}
	for(int i = 0;i < n; i++){
		for(int j = 0;j < vec2[i].size(); j++){
			cout << vec2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	n = 9;
	vector<vector<int> > v2c;
	for(int i = 0;i < n; i++){
		v2c.push_back(vector<int>());
	}
	for(int i = 0;i < n; i++){
		for(int j = 0;j <= i; j++){
			v2c[i].push_back((i + 1) * (j + 1));
		}
	}
	for(int i = 0;i < v2c.size(); i++){
		for(int j = 0;j < v2c[i].size(); j++){
			cout << i + 1 << " * " << j + 1 << " = " << v2c[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}
