#include <iostream>
using namespace std;
int rev(int scn){
	int n = 0;
	while(scn){
		n = n * 10 + scn % 10;
		scn /= 10;
	}
	return n;
}
int sc[100];
int main(){
	int n = 0;
	cin >> sc[0];
	bool judge = true;
	while(judge){
		int revs = rev(sc[n]);
		if (sc[n] == revs)	judge = false;
		else sc[++n] = revs + sc[n - 1];
	}
	cout << n << endl << sc[0];
	for(int i = 1;i <= n; i++){
		cout << " ---> " << sc[i];
	}
	cout << endl;
	return 0;
}
