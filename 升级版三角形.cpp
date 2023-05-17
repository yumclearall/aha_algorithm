#include <iostream>
using namespace std;
int main(){
	char a;
	cin >> a;
	if (a >= 'A' && a <= 'Z'){
		for (int i = 1; i <= a - 'A' + 1; i++){
			for (int j = i; j < a - 'A' + 1; j++){
				cout << " ";
				}
			for (int k = 1; k <= i; k++){
				cout << (char)('A' + k - 1);
				}
			for (int l = 1; l < i ; l++){
				cout << (char)('A' + i - l -1);
				}
			cout << endl;
			}
	}
	if (a >= '1' && a <= '9'){
		for (int i = 1; i <= a - '1' + 1; i++){
			for (int j = i; j < a - '1' + 1; j++){
				cout << " ";
				}
			for (int k = 1; k <= i; k++){
				cout << (char)('1' + k - 1);
				}
			for (int l = 1; l < i ; l++){
				cout << (char)('1' + i - l -1);
				}
			cout << endl;
			}
	}
	if (a >= 'a' && a <= 'z'){
		for (int i = 1; i <= a - 'a' + 1; i++){
			for (int j = i; j < a - 'a' + 1; j++){
				cout << " ";
				}
			for (int k = 1; k <= i; k++){
				cout << (char)('a' + k - 1);
				}
			for (int l = 1; l < i ; l++){
				cout << (char)('a' + i - l -1);
				}
			cout << endl;
			}
	}
	return 0;
}
